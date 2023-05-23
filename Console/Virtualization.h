#pragma once
#include "Answer.h"
#include "PlayerNum.h"
#include<random>
#include<iostream>
using namespace std;

class Virtualization
{
private:
	Num* answer;
	Num* player;
public:
	Virtualization();
	~Virtualization();

	void playeGame();
};

