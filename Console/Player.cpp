#include "Player.h"

Player::Player()
{
	_att = 10;
	_def = 10;
	_hp = 100;
	_mp = 100;
	_speed = 30;
	_luck = 20;
	_money = 10000;
}

Player::~Player()
{

}

void Player::putInventory(Equipment* equipment)
{
	inventory.push_back(equipment);
}

void Player::wearEquipment(Equipment* equipment)
{
	switch (equipment->getType())
	{
	case 0:
		_att += ((Weapon*)equipment)->getAtt();
		break;
	case 1:
		_def += ((Armor*)equipment)->getDef();
		break;
	case 2:
		_luck += ((Accessory*)equipment)->getLuck();
		break;
	}
}

void Player::printInventory()
{
	for (auto iInventory = inventory.begin(); iInventory != inventory.end(); ++iInventory)
	{
		(*iInventory)->printEquipment();
	}
}