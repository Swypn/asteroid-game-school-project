#pragma once
#include "gameobject.h"
#include "spaceship.h"
#include "asteroid.h"
#include "bullet.h"
#include "gui.h"
#include "ufo.h"

class Game
{
	Screen screen;
	Spaceship m_spaceship = Spaceship(screen);
	Asteroid m_asteroid;
	BulletManager m_bullets;
	Gui m_Gui;
	Ufo m_Ufo;
	void CheckCollision()
	{
	}
public:
	Game(Screen& p_screen);
	~Game(){};
	void setUp(Screen& p_screen);
	void Update(Screen& p_screen);
	void processingInput(Screen& p_screen);
	void render(Screen& p_screen);
};
