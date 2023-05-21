#pragma once
#include<iostream>
#include<Windows.h>
#include<conio.h>
#include<ctime>
#include<random>
#include "FG_Enemy.h"
#include "FG_Player.h"
#include "FG_UI.h";
#define STARTSCENE		0
#define BATTLESCENE		1
#define ENDSCENE		2

using namespace std;

class Assignment3
{
private:
	FG_Player* player;
	FG_Enemy* enemy;
	FG_UI* ui;
	int g_nScreenIndex;
	HANDLE g_hScreen[2];
	clock_t playerAttackCurTime, playerAttackOldTime;
	clock_t aiCurTime; 
	clock_t aiOldTime = NULL;
	clock_t enemyAttackCurTime, enemyAttackOldTime;
	int scene = STARTSCENE;

public:
	Assignment3();
	~Assignment3();
	void screenInit();
	void screenFlipping();
	void screenClear();
	void screenRelease();
	void screenPrint(int x, int y, char* string);
	void render();
	void gamePlay();
	void setColor(int font, int background);
};

