#include "FG_Player.h"


FG_Player::FG_Player()
{


}

FG_Player::~FG_Player()
{

}

char* FG_Player::returnMotion(int i)
{
	switch (state)
	{
	case 0:
		return playerIdle[i];
		break;
	case 1:
		return playerAttack[i];
		break;
	}
}

int FG_Player::returnPos()
{
	return pos;
}

void FG_Player::getDamege(int damage)
{
	hp -= damage;
	if (hp <= 0)
	{
		hp = 0;
	}
}

void FG_Player::move(int dir)
{
	pos += dir;
}

void FG_Player::changeState()
{
	state = !state;
}

int FG_Player::returnState()
{
	return state;
}

int FG_Player::returnHp()
{
	return hp;
}