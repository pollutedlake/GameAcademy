#include "Virtualization.h"

Virtualization::Virtualization()
{
	answer = new Answer;
	player = new PlayerNum;
}

Virtualization::~Virtualization()
{

}

void Virtualization::playeGame()
{
	random_device oRandomDevice;
	mt19937_64 rnd(oRandomDevice());
	uniform_int_distribution<int> numRange(0, 9);

	cout << "숫자야구 게임을 시작합니다.\n";
	int num = 0;
	int temp = 0;
	while (temp == 0)
	{
		temp = numRange(rnd);
	}
	num += temp * 100;
	while (num / 100 == temp)
	{
		temp = numRange(rnd);
	}
	num += temp * 10;
	temp = num / 100;
	while (num / 100 == temp || num / 10 == temp)
	{
		temp = numRange(rnd);
	}
	num += temp;
	answer->setN(num);
	while (true)
	{
		cout << "정답 : " << answer->getN() << endl;
		cout << "세자리 숫자를 중복되지 않게 입력하세요 : ";
		int input;
		cin >> input;
		player->setN(input);
		int strike = 0;
		int out = 0;
		int ball = 0;

		if (answer->getN() / 100 == player->getN() / 100) {
			strike++;
		}
		else if (answer->getN() / 100 == (player->getN() - player->getN() / 100 * 100) / 10) {
			ball++;
		}
		else if (answer->getN() / 100 == player->getN() % 10) {
			ball++;
		}
		else {
			out++;
		}
		if ((answer->getN() - answer->getN() / 100 * 100) / 10 == player->getN() / 100) {
			ball++;
		}
		else if ((answer->getN() - answer->getN() / 100 * 100) / 10 == (player->getN() - player->getN() / 100 * 100) / 10) {
			strike++;
		}
		else if ((answer->getN() - answer->getN() / 100 * 100) / 10 == player->getN() % 10) {
			ball++;
		}
		else {
			out++;
		}
		if (answer->getN() % 10 == player->getN() / 100) {
			ball++;
		}
		else if (answer->getN() % 10 == (player->getN() - player->getN() / 100 * 100) / 10) {
			ball++;
		}
		else if (answer->getN() % 10 == player->getN() % 10) {
			strike++;
		}
		else {
			out++;
		}

		cout << strike << "strike, " << ball << "ball, " << out << "out\n";
		if (strike == 3)
		{
			break;
		}
	}
}