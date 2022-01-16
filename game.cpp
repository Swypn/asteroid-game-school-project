#include "game.h"

Game::Game(Screen& p_screen) : screen(p_screen)

{
	
}

void Game::setUp(Screen& p_screen)// should set the propertis
{
	m_spaceship.SetUp(p_screen);
	m_asteroid.SetUp(p_screen);
	m_bullets.SetUp(p_screen);
	m_Ufo.SetUp(p_screen);
}
void Game::processingInput(Screen& p_screen)// Here should the input from player get call
{
	m_spaceship.ProccessInput(p_screen);
}
void Game::Update(Screen& p_screen)// should update the game logic
{
	m_spaceship.Update(p_screen);
}
void Game::render(Screen& p_screen)// should render on the screen
{
	m_spaceship.Render(p_screen);
}