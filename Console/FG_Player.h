#pragma once
#include <iostream>
using namespace std;

class FG_Player
{
private:
	int hp;
	int x;
	char playerIdle[100][100] = { "  бсбсбс   ",
								  " бс   бс  ",
								  " бс   бс  ",
								  " бс   бс  ",
								  "  бсбсбс   ",
								  "   бс    ",
								  "  бсбсбс   ",
								  " бс бс бс бс",
								  "бс  бс  бс ",
								  " бс бс    ",
								  "  бсбс    ",
								  "   бс    ",
								  "   бс    ",
	};
	char playerAttack[100][100] = {};
public:
	FG_Player();
	~FG_Player();
	void printPlayer();
	void getDamege(int damage);
	void move(int dir);
	void attack();
	void die();
};

