/*
���� 1. ���� �߱�

- 0 ~ 9������ ���� �� ��ǻ�Ͱ� ���Ƿ� 3���� �̴´�.

- ��ǻ�Ͱ� ���� ���ڸ� �÷��̾ ���� ���� 3���� �����Ͽ� ���ڿ� �ڸ������� ���ߴ� ����

- ���� ������ ���ڰ� ��ǻ�� ���ڿ� ������ �ڸ����� �ٸ� ���
�� 1. �� (1B)

- ���� ������ ���ڰ� ��ǻ�� ���ڿ� ���� �ڸ������� ��ġ�� ���
�� 1. ��Ʈ����ũ (1S)

- ���� ������ ���ڰ� ��ǻ�� ���ڿ� ���� �ʰ� �ڸ����� ��ġ���� ������
�� 1. �ƿ� (1 Out)

- �̷��� �� �Ͽ� 3S�� ������ ������� ������� ����� �����ָ� ���� ����

- �ʼ� : ġƮ, �迭 X
*/
#include<iostream>
#include<time.h>
using namespace std;

void main()
{
	srand(time(NULL));
	int comFirstN = rand() % 9 + 1;
	int comSecondN;
	int comThirdN;
	do
	{
		comSecondN = rand() % 10;
		comThirdN = rand() % 10;
	} while ((comFirstN == comSecondN) || (comFirstN == comThirdN) || (comSecondN == comThirdN));
	cout << "���ھ߱������� �����մϴ�." << endl;
	cout << "��밡 �� ���� : " << comFirstN << comSecondN << comThirdN << endl;
	int playerN;
	int tryN = 0;
	do
	{
		do
		{
			int strike = 0;
			int ball = 0;
			int out = 0;
			cout << "3�ڸ� ���ڸ� �Է��ϼ���. : ";
			cin >> playerN;
			int playerFirstN = playerN / 100;
			int playerSecondN = (playerN - playerFirstN * 100) / 10;
			int playerThirdN = playerN -  playerFirstN * 100 - playerSecondN * 10;
			if (comFirstN == playerFirstN) {
				strike++;
			}
			else if (comFirstN == playerSecondN) {
				ball++;
			}
			else if (comFirstN == playerThirdN) {
				ball++;
			}
			else {
				out++;
			}
			if (comSecondN == playerFirstN) {
				ball++;
			}
			else if (comSecondN == playerSecondN) {
				strike++;
			}
			else if (comSecondN == playerThirdN) {
				ball++;
			}
			else {
				out++;
			}
			if (comThirdN == playerFirstN) {
				ball++;
			}
			else if (comThirdN == playerSecondN) {
				ball++;
			}
			else if (comThirdN == playerThirdN) {
				strike++;
			}
			else {
				out++;
			}
			cout << strike << "S " << ball << "B " << out << "out" << endl;
			tryN++;
		} while (playerN / 100 == 0);
	} while (playerN != comFirstN * 100 + comSecondN * 10 + comThirdN);
	cout << "�¾ҽ��ϴ�." << endl;
	cout << tryN << "ȸ �õ��Ͽ����ϴ�." << endl;
}