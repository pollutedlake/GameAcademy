#include "Accessory.h"

Accessory::Accessory(char* name, int price, int stats, char* explanation, int type)
{
	_name = name;
	_price = price;
	_criticalRate = stats;
	_explanation = explanation;
	_type = type;
}

Accessory::~Accessory()
{

}

void Accessory::printEquipment()
{
	Equipment::printEquipment();
	cout << "ũ��Ƽ��Ȯ�� : " << _criticalRate << endl;
}