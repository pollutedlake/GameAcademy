#include "MainGame_03.h"

MainGame_03::MainGame_03()
{
	cout << "여기가 바로 헌터 맵" << endl;

	_terran = new Unit;
	cout << endl;

	_siegeTank = new Tank;
	cout << endl;

	_battleCruiser = new BattleCruiser;

	_terran->attack("마린", "저글링");
	cout << endl;

	_terran->attack(20, 50);
	cout << endl;

	_terran->attack(true);
	cout << endl;

	_terran->attack();
	cout << endl;

	_siegeTank->attack();
	cout << endl;

	_battleCruiser->attack();
	cout << endl;

}

MainGame_03::~MainGame_03()
{
	delete _terran;
	delete _siegeTank;
	delete _battleCruiser;
}