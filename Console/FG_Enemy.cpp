#include "FG_Enemy.h"

FG_Enemy::FG_Enemy()
{

}

FG_Enemy::~FG_Enemy()
{

}

void FG_Enemy::printEnemy()
{

}

void FG_Enemy::getDamege(int damage)
{
	hp -= damage;
	if (hp <= 0)
	{
		hp = 0;
		die();
	}
}

void FG_Enemy::move(int dir)
{
	x += dir;
}

void FG_Enemy::attack()
{

}

void FG_Enemy::die()
{

}