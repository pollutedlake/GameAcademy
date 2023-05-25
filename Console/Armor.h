#pragma once
#include "Equipment.h"
class Armor : public Equipment
{
	int _def;
public:
	Armor(char* _name, int _price, int _stats, char* _explanation, int type);
	~Armor();

	void printEquipment();
	void setDef(int def) { _def = def; }
	int getDef() { return _def; }
};

