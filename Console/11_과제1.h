#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <ctime>
#include <string>
#include "ABG_Enemy.h"
#include "ABG_Player.h"
#include "ABG_Equipment.h"
#include "ABG_Portion.h"
#define BATTLE		0
#define EQUIPMENT	1
#define PORTION		2


using namespace std;

class AutoBattleGame
{
private:
	ABG_Enemy* enemy;
	ABG_Player* player;
	ABG_Equipment* equipments[6];

	int g_nScreenIndex;
	HANDLE g_hScreen[2];

	int scene = BATTLE;

	clock_t oldTime = NULL;
	clock_t curTime;

	char intString[100];
	int damageToEnemy = -1;
	int damageToPlayer = -1;

public:
	AutoBattleGame();
	~AutoBattleGame();

	void screenInit();
	void screenFlipping();
	void screenClear();
	void screenRelease();
	void screenPrint(int x, int y, char* string);
	void render();
	void setColor(int font, int background);
	void playGame();
	char* intToString(int n);
};