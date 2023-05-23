#include "Referee.h"

Referee::Referee()
{
	strike = 0;
	out = 0;
	ball = 0;
}

Referee::~Referee()
{

}

int Referee::judge(int answerFirst, int answerSecond, int answerThird, int playerFirst, int playerSecond, int playerThird)
{
	strike = 0;
	out = 0;
	ball = 0;
	if (answerFirst == playerFirst) {
		strike++;
	}
	else if (answerFirst == playerSecond) {
		ball++;
	}
	else if (answerFirst == playerThird) {
		ball++;
	}
	else {
		out++;
	}
	if (answerSecond == playerFirst) {
		ball++;
	}
	else if (answerSecond == playerSecond) {
		strike++;
	}
	else if (answerSecond == playerThird) {
		ball++;
	}
	else {
		out++;
	}
	if (answerThird == playerFirst) {
		ball++;
	}
	else if (answerThird == playerSecond) {
		ball++;
	}
	else if (answerThird == playerThird) {
		strike++;
	}
	else {
		out++;
	}

	cout << strike << "strike, " << ball << "ball, " << out << "out\n";
	return strike;
}