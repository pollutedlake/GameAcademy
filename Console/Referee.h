#pragma once
#include<iostream>
using namespace std;

class Referee
{
private:
	int strike;
	int out;
	int ball;
public:
	Referee();
	~Referee();
	int judge(int answerFirst, int answerSecond, int answerThird, int playerFrist, int playerSecond, int playerThird);
};

