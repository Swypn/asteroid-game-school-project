#pragma once
#include "gameobject.h"

class Spaceship : GameObject
{
Sprite sprite;
public:
	Spaceship(Screen& p_screen);
	~Spaceship();
	void SetUp(Screen& p_screen)override;
	void Update(Screen& p_screen)override;
	void Render(Screen& p_screen)override;
	void ProccessInput(Screen& p_screen);
};