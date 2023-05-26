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
	cout << "이름 : " << _name << endl;
	cout << "가격 : " << _price << endl;
	cout << "특징 : " << _explanation << endl;
}