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
	cout << "�̸� : " << _name << endl;
	cout << "���� : " << _price << endl;
	cout << "ũ��Ƽ��Ȯ�� : " << _luck << endl;
	cout << "Ư¡ : " << _explanation << endl;
}