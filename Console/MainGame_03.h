#pragma once
#include "Unit.h"
#include "Tank.h"
#include "BattleCruiser.h"

class MainGame_03
{
private:
	Unit* _terran;
	Tank* _siegeTank;
	BattleCruiser* _battleCruiser;
public:
	MainGame_03();
	~MainGame_03();
};

