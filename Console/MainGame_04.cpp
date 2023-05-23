#include "MainGame_04.h"


MainGame_04::MainGame_04()
{
	_gun = new gun;
	_bow = new bow;

	cout << "¹«±â ÀåÂø" << endl;
	_myWeapon = _gun;
	_myWeapon->attack();

	_myWeapon = _bow;
	_myWeapon->attack();
}

MainGame_04::~MainGame_04()
{
	delete _gun;
	delete _bow;
}