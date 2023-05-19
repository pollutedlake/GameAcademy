#include "MainGame.h"

#define MAX_ITEM		100

enum EItem
{
	/*
	������
	����Ʈ
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
	// ���� �Ҵ�
	// MainGame mg;
	// mg.outPut();

	cout << '\n';
	MainGame* mainG = new MainGame;

	// �����Ⱚ
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