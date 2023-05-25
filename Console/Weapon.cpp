#include "Weapon.h"

Weapon::Weapon(char* name, int price, int stats, char* explanation, int type)
{
	_name = name;
	_price = price;
	_att = stats;
	_explanation = explanation;
	_type = type;
}

Weapon::~Weapon()
{

}

void Weapon::printEquipment()
{
	cout << "이름 : " << _name << endl;
	cout << "가격 : " << _price << endl;
	cout << "공격력 : " << _att << endl;
	cout << "특징 : " << _explanation << endl;
}