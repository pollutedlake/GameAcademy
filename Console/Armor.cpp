#include "Armor.h"

Armor::Armor(char* name, int price, int stats, char* explanation, int type)
{
	_name = name;
	_price = price;
	_def = stats;
	_explanation = explanation;
	_type = type;
}

Armor::~Armor()
{

}

void Armor::printEquipment()
{
	Equipment::printEquipment();
	cout << "���� : " << _def << endl;
}