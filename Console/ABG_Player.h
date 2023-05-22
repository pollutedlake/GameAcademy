#pragma once
#include<iostream>
#include<random>
#include "ABG_Equipment.h"
#include "ABG_Portion.h"
using namespace std;

class ABG_Player
{
private:
	int _hp;
	int _attack;
	int _mp;
	int _luck;
	int _def;
	int _speed;
	int _skillDef;

	struct skill
	{
		char* name;
		int coolTime;
		int maxCoolTime;
		int damage;
		int mp;
	};
	skill skill1;
	skill skill2;

	ABG_Equipment* weapon;
	ABG_Equipment* armor;
	ABG_Equipment* accessory;
	ABG_Portion* portions[4];
	
public:
	ABG_Player();
	~ABG_Player();

	int getHP() { return _hp; }
	void setHP(int hp) { _hp = hp; }
	int getAttack() { return _attack; }
	void setAttack(int attack) { _attack = attack; }
	int getMP() { return _mp; }
	void setMP(int mp) { _mp = mp; }
	int getLuck() { return _luck; }
	void setLuck(int luck) { _luck = luck; }
	int getDef() { return _def; }
	void setDef(int def) { _def = def; }
	int getSpeed() { return _speed; }
	void setSpeed(int speed) { _speed = speed; }
	int getSkillDef() { return _skillDef; }
	void setSkillDef(int skillDef) { _skillDef = skillDef; }

	int attack();
	void getDamage(int damage, bool isSkill);
	bool changeEquipment(ABG_Equipment* equipment, int type);
};

