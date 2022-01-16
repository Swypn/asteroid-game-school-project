#pragma once
#include "gameobject.h"

class Ufo : GameObject 
{
public:
	void SetUp(Screen& p_screen)override;
	void Update(Screen& p_screen)override;
	void Render(Screen& p_screen)override;
};