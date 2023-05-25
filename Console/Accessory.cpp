#include "Accessory.h"

Accessory::Accessory(char* name, int price, int stats, char* explanation, int type)
{
	_name = name;
	_price = price;
	_luck = stats;
	_explanation = explanation;
	_type = type;
}

Accessory::~Accessory()
{

}

void Accessory::printEquipment()
{
	cout << "이름 : " << _name << endl;
	cout << "가격 : " << _price << endl;
	cout << "크리티컬확률 : " << _luck << endl;
	cout << "특징 : " << _explanation << endl;
}