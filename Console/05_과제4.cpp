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
using namespace std;

void main() {
	srand(time(NULL));
	int money = 100000000;
	int betting;
	cout << "���ñݾ��� �Է��ϼ��� : ";
	cin >> betting;
	int firstN = rand() % 10;
	int secondN = rand() % 10;
	int thirdN = rand() % 10;
	do
	{
		cout << firstN << secondN << thirdN << "\t �귿�� ���߷��� 0�� �Է��ϼ���.";
		firstN = ++firstN % 10;
		secondN = ++secondN % 10;
		thirdN = ++thirdN % 10;
		Sleep(100);
		system("cls");
	} while (true);
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