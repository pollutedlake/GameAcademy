#pragma once
#include "Equipment.h"
class Accessory : public Equipment
{
private:
	int _luck;
public:
	Accessory(char* name, int price, int stats, char* explanation, int type);
	~Accessory();

	void printEquipment();
	void setLuck(int luck) { _luck = luck; }
	int getLuck() { return _luck; }
};

