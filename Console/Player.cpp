#include "Player.h"

Player::Player()
{
	_att = 10;
	_def = 10;
	_hp = 100;
	_mp = 100;
	_speed = 30;
	_criticalRate = 15;
	_money = 10000;
}

Player::~Player()
{
	for (auto iterator = inventory.begin(); iterator != inventory.end(); ++iterator)
	{
		delete* iterator;
	}
	inventory.clear();
}

void Player::putInventory(Equipment* equipment)
{
	inventory.push_back(equipment);
}

void Player::wearEquipment(int index)
{
	Equipment* tempE = inventory.at(index);
	switch (tempE->getType())
	{
	case 0:
		if (weapon != nullptr)
		{
			putInventory(weapon);
			_att -= weapon->getAtt();
		}
		weapon = (Weapon*)tempE;
		_att += weapon->getAtt();
		break;
	case 1:
		if (armor != nullptr)
		{
			putInventory(armor);
			_def = armor->getDef();
		}
		armor = (Armor*)tempE;
		_def += armor->getDef();
		break;
	case 2:
		if (accessory != nullptr)
		{
			putInventory(accessory);
			_criticalRate = accessory->getCriticalRate();
		}
		accessory = (Accessory*)tempE;
		_criticalRate += accessory->getCriticalRate();
		break;
	}
	takeOutEquipment(index);
}

void Player::printInventory()
{
	int index = 0;
	for (auto iInventory = inventory.begin(); iInventory != inventory.end(); ++iInventory)
	{
		++index;
		linePrint();
		cout << index << "�� ���" << endl;
		(*iInventory)->printEquipment();
	}
	linePrint();
}

int Player::getInventorySize()
{
	return inventory.size();
}

Equipment* Player::getEquipment(int index)
{
	return inventory.at(index);
}

void Player::takeOutEquipment(int index)
{
	inventory.erase(inventory.begin() + index);
}

void Player::printStatus()
{
	linePrint();
	cout << "Player�� ����" << endl;
	cout << "HP : " << _hp << endl;
	printf("���ݷ� : %d(10 + %d)\n", _att, weapon == nullptr ? 0 : weapon->getAtt());
	printf("���� : %d(10 + %d)\n", _def, armor == nullptr ? 0 : armor->getDef());
	cout << "���� : " << _mp << endl;
	cout << "���ǵ� : " << _speed << endl;
	printf("ũ��Ƽ��Ȯ�� : %d(15 + %d)\n", _criticalRate, accessory == nullptr ? 0 : accessory->getCriticalRate());
	linePrint();
	linePrint();
	cout << endl;
	linePrint();
	linePrint();
	cout << "���� �������� ���" << endl;
	linePrint();
	cout << "����" << endl;
	if(weapon != nullptr)
	{
		weapon->printEquipment();
	}
	linePrint();
	cout << "��" << endl;
	if(armor != nullptr)
	{
		armor->printEquipment();
	}
	linePrint();
	cout << "�Ǽ�����" << endl;
	if(accessory != nullptr)
	{
		accessory->printEquipment();
	}
	linePrint();
	linePrint();
	cout << endl;
}

void Player::linePrint()
{
	cout << "===================================================================" << endl;
}