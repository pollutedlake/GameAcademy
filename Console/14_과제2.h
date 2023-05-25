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

struct Equimpents
{
	char* name;
	int price;
	int stats;
	char* explanation;
	int type;
};

enum EquipmentType
{
	WEAPON,
	ARMOR,
	ACCESSORY,
	TypeNum
};

class Shop
{
private:
	Player* player;
	vector<Equipment*> saleItem;
	Equipment* equipment;
	int* equipmentN = new int[TypeNum];
	int weaponN;
	int armorN;
	int accessoryN;

public:
	Shop();
	~Shop();

	void startShopping();
	void linePrint();
	int printDoWhat();
	int printEquipmentType();
	bool purchaseEquipment(int type);
	void sellEquipment();
	void wearEquipment();
	void textColor(int color, int background);
};