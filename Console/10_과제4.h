#include<iostream>
#include "RPS_Me.h"
#include "RPS_Opponent.h"
using namespace std;

#define DRAW		0
#define WIN			1
#define LOSE		2

class Assignment4
{
private:
	RPS_Me* me;
	RPS_Opponent* opponent;

public:
	Assignment4();
	~Assignment4();

	void playGame();

	int checkWhoWin(int meRPS, int opponentRPS);
};