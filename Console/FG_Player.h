#pragma once
#include<iostream>
#include<Windows.h>
using namespace std;

class FG_Player
{
private:
	int hp = 100;
	int pos = 0;
	char* playerIdle[19] =	  {   "  бсбсбс",
								  " бс    бс",
								  " бс    бс",
								  " бс    бс",
								  "  бсбсбс",
								  "    бс",
								  "  бсбсбс",
								  " бс бс бс бс",
								  "бс  бс  бс",
								  " бс бс",
								  "  бсбс",
								  "    бс",
								  "    бс",
								  "    бс",
								  "   бс бс",
								  "  бс   бс",
								  "бс      бс",
								  "бс      бс",
								  "бс      бс",
	};
	char* playerAttack[19] = {   "    бсбсбс",
								    "   бс   бс",
								    "   бс   бс",
								    "   бс   бс",
								    "    бсбсбс",
								    "     бс",
								    "    бсбсбсбсбсбсбсбс",
								    "   бс бс",
								    "  бс  бс",
								    "   бс бс",
								    "    бсбс",
								    "     бс",
								    "     бс",
								    "     бс",
								    "    бс бс",
								    "   бс   бс",
								    "  бс     бс",
								    " бс     бс",
								    "бс     бс",
	
	};
	int state = 0;

public:
	FG_Player();
	~FG_Player();
	char* returnMotion(int i);
	int returnPos();
	void getDamege(int damage);
	void move(int dir);
	void changeState();
	int returnState();
	int returnHp();
};

