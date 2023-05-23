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

	cout << "���ھ߱� ������ �����մϴ�.\n";
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
		cout << "���� : " << answer->getN() << endl;
		cout << "���ڸ� ���ڸ� �ߺ����� �ʰ� �Է��ϼ��� : ";
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