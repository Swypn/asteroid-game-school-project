#include "spaceship.h"

Spaceship::Spaceship(Screen& p_screen)
{
	sprite = p_screen.LoadSprite("assets/SpaceShip.png");
	sprite.texture.src = { 100,100,100,100 };
	sprite.origin = { 100,100 };
	sprite.angle = 95;
	sprite.position = { 150,150 };
}
Spaceship::~Spaceship()
{

}
void Spaceship::SetUp(Screen& p_screen)
{
	
}
void Spaceship::ProccessInput(Screen& p_screen)
{

}
void Spaceship::Update(Screen& p_screen)
{
	
}
void Spaceship::Render(Screen& p_screen)
{
	p_screen.DrawSprite(sprite);
}