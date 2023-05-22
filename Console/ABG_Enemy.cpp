#include "ABG_Enemy.h"

ABG_Enemy::ABG_Enemy()
{
	_hp = 100;
	_attack = 5;
	_mp = 100;
	skill1 = { "¸ØÃâ¼ö ¾ø´Â Èû", 2, 7, 10, 30 };
	_speed = 1;
}

ABG_Enemy::~ABG_Enemy()
{

}

int ABG_Enemy::attack()
{
	if (skill1.coolTime < 1)
	{
		if (_mp >= skill1.coolTime)
		{
			skill1.coolTime = skill1.maxCoolTime;
			return skill1.damage + 100;
		}
	}
	else
	{
		skill1.coolTime--;
		return _attack;
	}
}

int ABG_Enemy::getDamage(int damage)
{
	_hp -= damage % 100;
	return damage;
}

char* ABG_Enemy::getEnemyDot(int i)
{
	return enemyIdle[i];
}