#pragma once
#include"Equipment.h"

class Weapon : public Equipment
{
private:
	int _att;
public:
	Weapon(char* name, int price, int stats, char* explanation, int type);
	~Weapon();
	
	void setAtt(int att) { _att = att; }
	int getAtt() { return _att; }
	void printEquipment();
};

