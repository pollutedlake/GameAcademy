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

	char* enemyIdle[19] = { "    бсбсбс",
							 "   бс    бс",
							 "   бс    бс",
							 "   бс    бс",
							 "    бсбсбс",
							 "      бс",
							 "    бсбсбс",
							 "бс бс бс бс",
							 "  бс  бс  бс",
							 "      бс бс",
							 "      бсбс",
							 "      бс",
							 "      бс",
							 "      бс",
							 "    бс бс",
							 "   бс   бс",
							 " бс      бс",
							 " бс      бс",
							 " бс      бс",

	};

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
	int getDamage(int damage);
	char* getSkill1Name() { return skill1.name; }
	char* getEnemyDot(int i);
};

