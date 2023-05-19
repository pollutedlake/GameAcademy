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
	cout << "상대 : ";
	switch (RPS)
	{
	case Scissors:
		cout << "가위";
		break;
	case Rock:
		cout << "바위";
		break;
	case Paper:
		cout << "보";
		break;
	}
	cout << endl;
}