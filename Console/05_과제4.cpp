/*
����4. ���Ըӽ�

- �ʱ� ������ : 1��

- 777 ���� ���� 3�� ���� �� ���ñݾ��� 12��

- 7�� ������ ���� ���� 3�� ���ý� ���ñݾ��� 5��

- ���� ���� 2�� ���� �� ���ñݾ��� 2��

- �� �ܿ��� ���ñݾ� �ұ�

�ʼ� : 
1. �귿�� �����ϴ� ��� �ð�ȭ
2. ������ �ϰ� ���� �귿�� ������ ������ �귿�� �ڵ����� ��� �ݺ��ȴ�.
3. ġƮ �ʼ�
�� ġƮ�� Ȱ��ȭ �Ǹ� ���� 3���� �Է� �޴´�. (EX : 777)
�� �������� �귿�� �õ��� �ǰ� 777�� ��÷�Ǵ°� Ȯ���� �� �ְ� �����
*/
#include<iostream>
#include<time.h>
#include<Windows.h>
#include<thread>
using namespace std;

static bool run = true;
static int input = 2;
static int wantNFirst = 10;
static int wantNSecond = 10;
static int wantNThird = 10;
static int firstN;
static int secondN;
static int thirdN;

void stop(bool& run, int& input) {
	srand(time(NULL));
	firstN = rand() % 10;
	secondN = rand() % 10;
	thirdN = rand() % 10;
	int count = 0;
	while(run) 
	{
		system("cls");
		cout << firstN << secondN << thirdN << endl;
		switch (input)
		{
			case 0:
				count++;
				if (count < 30) 
				{
					secondN = ++secondN % 10;
				}
				if (count < 60)
				{
					thirdN  = ++thirdN % 10;
				}
				else {
					run = false;
				}
				cout << "�귿�� ���߷��� 0�� �Է��ϼ���.(1 : ġƮ)" << endl;
			break;
			case 1:
				if (firstN != wantNFirst)
				{
					firstN = ++firstN % 10;
				}
				if (secondN != wantNSecond || count < 30)
				{
					secondN = ++secondN % 10;
					count++;
				}
				if (thirdN != wantNThird || count < 60)
				{
					thirdN = ++thirdN % 10;
					count++;
				}
				else {
					run = false;
				}
				cout << "���ϴ� ���ڸ� ���� �Է��ϼ��� : " << endl;
			break;
			case 2:
				firstN = ++firstN % 10;
				secondN = ++secondN % 10;
				thirdN = ++thirdN % 10;
				cout << "�귿�� ���߷��� 0�� �Է��ϼ���.(1 : ġƮ)" << endl;
			break;
		}
		Sleep(100);
	}
}

void main() {
	srand(time(NULL));
	int money = 100000000;
	int betting;
	cout << "���ñݾ��� �Է��ϼ��� : ";
	cin >> betting;
	thread roulette{stop, ref(run), ref(input)};
	cin >> input;
	if (input == 1) {
		int wantN;
		cin >> wantN;
		wantNFirst  = wantN / 100;
		wantNSecond = (wantN % 100) / 10;
		wantNThird = wantN % 10;
	}
	roulette.join();
	if ((firstN == secondN) || (firstN == thirdN) || (secondN == thirdN)) {
		if ((firstN == secondN) && (secondN == thirdN)) {
			if (firstN == 7) {
				money += betting * 12;
			}
			else {
				money += betting * 5;
			}
		}
		else {
			money += betting * 2;
		}
	}
	else {
		money -= betting;
	}
	cout << "���� ������ : " << money << endl;
}