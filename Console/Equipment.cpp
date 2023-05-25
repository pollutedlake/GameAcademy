#include "Equipment.h"

Equipment::Equipment()
{
}

void Equipment::printEquipment()
{
	cout << "이름 : " << _name << endl;
	cout << "가격 : " << _price << endl;
	cout << "특징 : " << _explanation << endl;
}