#pragma once
#include "Player.h"
#include<iostream>
#include<Windows.h>
using namespace std;

class Shop
{
private:
	Player* player;
public:
	Shop();
	~Shop();

	void startShopping();
	void linePrint();
	int printDoWhat();
	int printEquipmentType();
	void textColor(int color, int background);
};