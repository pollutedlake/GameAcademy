#include "RPS_Opponent.h"

RPS_Opponent::RPS_Opponent()
{

}

RPS_Opponent::~RPS_Opponent()
{

}

void RPS_Opponent::setRPS()
{
	random_device oRandomDevice;
	mt19937_64 rnd(oRandomDevice());
	uniform_int_distribution<int> rockPaperScissors(0, 2);

	this->RPS = rockPaperScissors(rnd);
}

int RPS_Opponent::returnRPS()
{
	return this->RPS;
}

void RPS_Opponent::printRPS()
{
	cout << "��� : ";
	switch (RPS)
	{
	case Scissors:
		cout << "����";
		break;
	case Rock:
		cout << "����";
		break;
	case Paper:
		cout << "��";
		break;
	}
	cout << endl;
}