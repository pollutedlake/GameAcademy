#include "PlayerNum.h"

PlayerNum::PlayerNum()
{
}

PlayerNum::~PlayerNum()
{
}

void PlayerNum::setN(int n)
{
	int index = 0;
	while (n != 0)
	{
		_n[index] = n % 10;
		n /= 10;
		index++;
	}
}

int PlayerNum::getN()
{
	return _n[0] + _n[1] * 10 + _n[2] * 100;
}