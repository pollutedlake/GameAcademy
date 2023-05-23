#include "Classes8.h"

Classes8::Classes8()
{
	answerFirstN = new AnswerFirstNum;
	answerSecondN = new AnswerSecondNum;
	answerThirdN = new AnswerThirdNum;
	playerFirstN = new PlayerFirstNum;
	playerSecondN = new PlayerSecondNum;
	playerThirdN = new PlayerThirdNum;
	referee = new Referee;
}

Classes8::~Classes8()
{
	delete answerFirstN;
	delete answerSecondN;
	delete answerThirdN;
	delete playerFirstN;
	delete playerSecondN;
	delete playerThirdN;
	delete referee;
}

void Classes8::gameStart()
{
	random_device oRandomDevice;
	mt19937_64 rnd(oRandomDevice());
	uniform_int_distribution<int> numRange(0, 9);
	
	cout << "숫자야구 게임을 시작합니다.\n";
	int num = 0;
	while (num == 0)
	{
		num = numRange(rnd);
	}
	answerFirstN->setNum(num);
	num = answerFirstN->getNum();
	while (answerFirstN->getNum() == num)
	{
		num = numRange(rnd);
	}
	answerSecondN->setNum(num);
	num = answerFirstN->getNum();
	while (answerFirstN->getNum() == num || answerSecondN->getNum() == num)
	{
		num = numRange(rnd);
	}
	answerThirdN->setNum(num);
	while (true)
	{
		cout << "정답 : " << answerFirstN->getNum() * 100 + answerSecondN->getNum() * 10 + answerThirdN->getNum() << endl;
		cout << "세자리 숫자를 중복되지 않게 입력하세요 : ";
		int input;
		cin >> input;
		playerFirstN->setNum(input / 100);
		playerSecondN->setNum((input - (input / 100) * 100) / 10);
		playerThirdN->setNum(input % 10);
		if (referee->judge(answerFirstN->getNum(), answerSecondN->getNum(), answerThirdN->getNum(), playerFirstN->getNum(), playerSecondN->getNum(), playerThirdN->getNum()) == 3)
		{
			break;
		}
	}
}