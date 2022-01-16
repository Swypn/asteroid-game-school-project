#pragma once
#include "Screen.h"

class GameObject
{
	Vector2 position;
	Vector2 dir;
	float speed;
protected:
	virtual void SetUp(Screen& p_screen)= 0;
	virtual void Render(Screen& p_screen) = 0;
	virtual void Update(Screen& p_screen) = 0;
};