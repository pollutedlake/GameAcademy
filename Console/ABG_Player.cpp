#include "ABG_Player.h"

ABG_Player::ABG_Player()
{
	_hp = 100;
	_attack = 3;
	_mp = 100;
	skill1 = { "해머", 0, 3, 5, 10 };
	skill2 = { "캐논", 0, 5, 12, 20 };
	_luck = 10;
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

int ABG_Player::attack()
{
	random_device oRandomDevice;
	mt19937_64 rnd(oRandomDevice());
	uniform_int_distribution<int> criticalRange(1, 100);
	int critical = criticalRange(rnd);
	if (critical <= _luck)
	{
		critical = 2;
		cout << "크리티컬" << endl;
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
				cout << "스킬1 사용 데미지" << skill1.damage << endl;
				return skill1.damage * critical;
			}
			else
			{
				setMP(_mp - skill2.mp);
				cout << "스킬2 사용 데미지" << skill2.damage << endl;
				skill2.coolTime = skill2.maxCoolTime;
				return skill2.damage * critical;
			}
		}
		else {

		}
		setMP(_mp - skill1.mp);
		cout << "스킬1 사용 데미지" << skill1.damage << endl;
		skill1.coolTime = skill1.maxCoolTime;
		return skill1.damage * critical;
	}
	else if (skill2.coolTime < 1 && _mp >= skill2.mp)
	{
		setMP(_mp - skill2.mp);
		cout << "스킬2 사용 데미지" << skill2.damage << endl;
		skill2.coolTime = skill2.maxCoolTime;
		return skill2.damage * critical;
	}
	else
	{
		cout << "평타 데미지" << _attack << endl;
		return _attack * critical;
	}
}

void ABG_Player::getDamage(int damage, bool isSkill)
{
	if (isSkill)
	{
		_hp -= (damage - _skillDef);
	}
	else
	{
		_hp -= (damage - _def);
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