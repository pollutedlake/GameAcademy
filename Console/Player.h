#pragma once
class Player
{
private:
	int _hp;
	int _att;
	int _def;
	int _mp;
	int _speed;
	int _luck;
public:
	Player();
	~Player();

	void setAtt(int att) { _att = att; }
	void setDef(int def) { _def = def; }
	void setMp(int mp) { _mp = mp; }
	void setSpeed(int speed) { _speed = speed; }
	void setLuck(int luck) { _luck = luck; }
	void setHp(int hp) { _hp = hp; }

	int getAtt() { return _att; }
	int getDef() { return _def; }
	int getMp() { return _mp; }
	int getSpeed() { return _speed; }
	int getLuck() { return _luck; }
	int getHp() { return _hp; }
};

