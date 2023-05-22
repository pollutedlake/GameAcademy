#include "ABG_Player.h"

ABG_Player::ABG_Player()
{
	_hp = 100;
	_attack = 3;
	_mp = 100;
	skill1 = { "해머", 0, 3, 5, 5 };
	skill2 = { "캐논", 0, 5, 12, 10 };
	_luck = 10;
	_speed = 2;
	weapon = new ABG_Equipment;
	armor = new ABG_Equipment;
	accessory = new ABG_Equipment;
	setAttack(_attack + weapon->getStat());
	setDef(_def + armor->getStat());
	switch (accessory->getAccessoryStat())
	{
	case 0:
		setLuck(accessory->getStat() + _luck);
		break;
	case 1:
		setSkillDef(accessory->getStat() + _skillDef);
		break;
	}
	
}

ABG_Player::~ABG_Player()
{
	delete weapon;
	delete armor;
	delete accessory;
	for (int i = 0; i < 4; i++)
	{
		delete portions[i];
	}
}

char* ABG_Player::getPlayerDot(int i)
{
	return playerIdle[i];
}

int ABG_Player::attack()
{
	random_device oRandomDevice;
	mt19937_64 rnd(oRandomDevice());
	uniform_int_distribution<int> criticalRange(1, 100);
	int critical = criticalRange(rnd);
	if (critical <= _luck)
	{
		critical = 2;
	}
	else
	{
		critical = 1;
	}
	if (skill1.coolTime < 1 && _mp >= skill1.mp)
	{
		if (skill2.coolTime < 1 && _mp >= skill2.mp)
		{
			if (skill1.damage > skill2.damage)
			{
				skill1.coolTime = skill1.maxCoolTime;
				setMP(_mp - skill1.mp);
				skill2.coolTime--;
				return skill1.damage * critical + 100;
			}
			else
			{
				setMP(_mp - skill2.mp);
				skill2.coolTime = skill2.maxCoolTime;
				skill1.coolTime--;
				return skill2.damage * critical + 200;
			}
		}
		else {

		}
		setMP(_mp - skill1.mp);
		skill1.coolTime = skill1.maxCoolTime;
		skill2.coolTime--;
		return skill1.damage * critical + 100;
	}
	else if (skill2.coolTime < 1 && _mp >= skill2.mp)
	{
		setMP(_mp - skill2.mp);
		skill2.coolTime = skill2.maxCoolTime;
		skill1.coolTime--;
		return skill2.damage * critical + 200;
	}
	else
	{
		skill2.coolTime--;
		skill1.coolTime--;
		return _attack * critical;
	}
}

int ABG_Player::getDamage(int damage, bool isSkill)
{
	if (isSkill)
	{
		_hp -= (damage - _skillDef);
		return damage - _skillDef + 100;
	}
	else
	{
		_hp -= (damage - _def);
		return damage - _def;
	}
}

bool ABG_Player::changeEquipment(ABG_Equipment* equiment, int type)
{
	if (equiment == nullptr)
	{
		return false;
	}
	if (type < 0 || type > 2)
	{
		return false;
	}
	switch (type)
	{
	case 0:
		weapon = equiment;
		setAttack(_attack + weapon->getStat());
		break;
	case 1:
		armor = equiment;
		setDef(_def + armor->getStat());
		break;
	case 2:
		switch (accessory->getAccessoryStat())
		{
		case 0:
			setLuck(accessory->getStat() + _luck);
			break;
		case 1:
			setSkillDef(accessory->getStat() + _skillDef);
			break;
		}
		break;
	default:
		return true;
		break;
	}
}