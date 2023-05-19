#pragma once
#include<iostream>
#include<random>

#define Scissors		0
#define Rock			1
#define Paper			2

using namespace std;

class RPS_Opponent
{
private:
	int RPS;

public:
	RPS_Opponent();
	~RPS_Opponent();

	void setRPS();
	int returnRPS();
	void printRPS();
};

