#pragma once
#include "Player.h"
#include "Equipment.h"
#include "Weapon.h"
#include "Armor.h"
#include "Accessory.h"
#include<iostream>
#include<Windows.h>
#include<vector>
using namespace std;

#define WEAPON		0
#define ARMOR		1
#define ACCESSORY	2

struct Equimpents
{
	char* name;
	int price;
	int stats;
	char* explanation;
	int type;
};

class Shop
{
private:
	Player* player;
	vector<Equipment*> saleItem;
	Equipment* equipment;
public:
	Shop();
	~Shop();

	void startShopping();
	void linePrint();
	int printDoWhat();
	int printEquipmentType();
	void purchaseEquipment(int type);
	void textColor(int color, int background);
};