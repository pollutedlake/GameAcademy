#include "MainGame.h"

#define MAX_ITEM		100

enum EItem
{
	/*
	아이템
	리스트
	.
	.
	.
	.
	.
	.
	*/
};

class PlayerInfo
{
private:
	int x, y;
	int hp;
	int shield;
	int level;
	double exp;
	EItem items[MAX_ITEM];

public:
	void walk();
	void jump();
	void turn(int dir);
	void defence();
	bool attack(int what);
	bool hurt(int fromwho);
	bool die();
};

void main()
{
	// 정적 할당
	// MainGame mg;
	// mg.outPut();

	cout << '\n';
	MainGame* mainG = new MainGame;

	// 쓰레기값
	mainG->showPosition();
	mainG->setPosition(100, 100);
	// 100, 100
	mainG->showPosition();
	mainG->movePosition();
	mainG->movePosition();
	mainG->movePosition();
	// 400, 400
	mainG->showPosition();

	delete mainG;
}