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
	Equipment::printEquipment();
	cout << "°ø°Ý·Â : " << _att << endl;
}