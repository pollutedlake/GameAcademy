#include "Equipment.h"

Equipment::Equipment()
{
}

Equipment::Equipment(char* name, int price, char* explanation, int type)
{
	_name = name;
	_price = price;
	_explanation = explanation;
	_type = type;
}

void Equipment::printEquipment()
{
	cout << "�̸� : " << _name << endl;
	cout << "���� : " << _price << endl;
	cout << "Ư¡ : " << _explanation << endl;
}