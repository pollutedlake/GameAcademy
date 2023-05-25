#pragma once
#include "Equipment.h"
class Accessory : public Equipment
{
private:
	int _criticalRate;
public:
	Accessory(char* name, int price, int stats, char* explanation, int type);
	~Accessory();

	void printEquipment();
	void setCriticalRate(int criticalRate) { _criticalRate = criticalRate; }
	int getCriticalRate() { return _criticalRate; }
};

