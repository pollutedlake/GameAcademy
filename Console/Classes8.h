#pragma once
#include "AnswerFirstNum.h"
#include "AnswerSecondNum.h"
#include "AnswerThirdNum.h"
#include "PlayerFirstNum.h"
#include "PlayerSecondNum.h"
#include "PlayerThirdNum.h"
#include "Referee.h"
#include <iostream>
#include<random>
using namespace std;

class Classes8
{
private:
	AnswerFirstNum* answerFirstN;
	AnswerSecondNum* answerSecondN;
	AnswerThirdNum* answerThirdN;
	PlayerFirstNum* playerFirstN;
	PlayerSecondNum* playerSecondN;
	PlayerThirdNum* playerThirdN;
	Referee* referee;
public:
	Classes8();
	~Classes8();

	void gameStart();
};

