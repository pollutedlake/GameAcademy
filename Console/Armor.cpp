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
	cout << "이름 : " << _name << endl;
	cout << "가격 : " << _price << endl;
	cout << "방어력 : " << _def << endl;
	cout << "특징 : " << _explanation << endl;
}