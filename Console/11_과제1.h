#pragma once
#include <iostream>
#include <Windows.h>
#include "ABG_Enemy.h"
#include "ABG_Player.h"
#include "ABG_Equipment.h"
#include "ABG_Portion.h"

using namespace std;

class AutoBattleGame
{
private:
	ABG_Enemy* enemy;
	ABG_Player* player;
	ABG_Equipment* equipments[6];

public:
	AutoBattleGame();
	~AutoBattleGame();
	void playGame();
};