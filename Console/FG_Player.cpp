#include "FG_Player.h"


FG_Player::FG_Player()
{


}

FG_Player::~FG_Player()
{

}

void FG_Player::printPlayer()
{

}

void FG_Player::getDamege(int damage)
{
	hp -= damage;
	if (hp <= 0)
	{
		hp = 0;
		die();
	}
}

void FG_Player::move(int dir)
{
	x += dir;
}

void FG_Player::attack()
{

}

void FG_Player::die()
{

}