#pragma once
#include<iostream>
using namespace std;
class FG_Enemy
{
private:
	int hp;
	int x;
	char* enemy;

public:
	FG_Enemy();
	~FG_Enemy();
	void printEnemy();
	void getDamege(int damage);
	void move(int dir);
	void attack();
	void die();
};

