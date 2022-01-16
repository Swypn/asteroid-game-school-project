#pragma once
#include "gameobject.h"


class BulletManager : GameObject
{
public:
	void SetUp(Screen& p_screen)override;
	void Update(Screen& p_screen)override;
	void Render(Screen& p_screen)override;
};