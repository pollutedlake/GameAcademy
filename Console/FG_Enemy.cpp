#include "FG_Enemy.h"

FG_Enemy::FG_Enemy()
{

}

FG_Enemy::~FG_Enemy()
{

}

int FG_Enemy::returnHp()
{
	return hp;
}

int FG_Enemy::returnPos()
{
	return pos;
}

char* FG_Enemy::returnMotion(int i)
{
	switch (state)
	{
	case 0:
		return enemyIdle[i];
		break;
	case 1:
		return enemyAttack[i];
		break;
	}
}
void FG_Enemy::getDamege(int damage)
{
	hp -= damage;
	if (hp <= 0)
	{
		hp = 0;
	}
}

void FG_Enemy::move(int dir)
{
	if (pos + dir > 90)
	{
		return;
	}
	pos += dir;
}

void FG_Enemy::changeState()
{
	state = !state;
}

int FG_Enemy::returnState()
{
	return state;
}