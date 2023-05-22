#pragma once
#include<iostream>
using namespace std;

class ABG_Enemy
{
private:
	int _hp;
	int _attack;
	int _mp;
	int _speed;
	struct skill
	{
		char* name;
		int coolTime;
		int maxCoolTime;
		int damage;
		int mp;
	};
	skill skill1;

public:
	ABG_Enemy();
	~ABG_Enemy();
	void setHP(int hp) { _hp = hp; }
	int getHP() { return _hp; }
	void setAttack(int attack) { _attack = attack; }
	int getAttack() { return _attack; }
	int getSpeed() { return _speed; }
	void setSpeed(int speed) { _speed = speed; }

	int attack();
	void getDamage(int damage);
};

