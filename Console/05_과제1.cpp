/*
����1 ����������

- ����ġ���� �̿��� �����.

- ġƮ ��ɰ� ���� ��� �߰�
�� �ʱ� ������ : 10,000��
�� �ּ� ������ 1,000������

- 5���� �ϰų� ���� ���� ���� ���� ������ ���� ����

- �̱�� �ǵ��� x3�� ��� ���� �ǵ��� x7�踦 �Ҵ´�.

- ��� ��� �ǵ��� x5�踦 ��´�.
*/
#include<iostream>
#include<time.h>
#include<Windows.h>

using namespace std;

int main() {
	srand(time(NULL));
	int money = 10000;
	int betting;
	for (int i = 0; (i < 5) && money > 0; i++) {
		int player;
		cout << "������������ �����մϴ�." << endl;
		do {
			cout << "������ �ݾ��� �Է��ϼ��� : ";
			cin >> betting;
			switch (betting > money) {
			case 1:
				printf("������ �ݾ��� �����ݺ��� �����ϴ�. ���� ������ : %d\n", money);
				break;
			}
		} while (betting > money);
		int com = rand() % 3 + 3;
		switch (com) {
		case 3:
			cout << "��ǻ�Ͱ� ������ �½��ϴ�." << endl;
			break;
		case 4:
			cout << "��ǻ�Ͱ� ������ �½��ϴ�." << endl;
			break;
		case 5:
			cout << "��ǻ�Ͱ� ���� �½��ϴ�." << endl;
			break;
		}
		cout << "���������� �� �ϳ��� ���ʽÿ�.(0 : ����, 1 : ����, 2 : ��, �� ���� ���� : ���α׷� ����) : ";
		cin >> player;
		Sleep(1000);

		switch (player > 2 || player < 0) {
		case 1:
			return 0;
			break;
		}
		switch ((com - player) % 3) {
		case 0:
			cout << "�����ϴ�." << endl;
			money += betting * 5;
			break;
		case 1:
			cout << "�����ϴ�." << endl;
			money -= betting * 7;
			break;
		case 2:
			cout << "�̰���ϴ�." << endl;
			money += betting * 3;
			break;
		}
		cout << "���� ������ : " << money << endl;
	}
}