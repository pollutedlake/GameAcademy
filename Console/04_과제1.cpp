/*
���� 1. ���������� ����

- if���� �̿��� �����.
�� switch ���� ������� �ʴ´�.

- ������ ���� Ƚ���� �� 5��]
�� ���Ĵ� ���� ����

�ʼ�: ġƮ
*/
#include<iostream>
#include<time.h>
#include<Windows.h>
using namespace std;

int main() {
	srand(time(NULL));
	while (true) {
		int player;
		int com = rand() % 3;
		cout << "���������� ������ �����մϴ�." << endl;
		if (com == 0) {
			cout << "��ǻ�Ͱ� ������ �´�." << endl;
		}
		else if (com == 1) {
			cout << "��ǻ�Ͱ� ������ �´�." << endl;
		}
		else if (com == 2) {
			cout << "��ǻ�Ͱ� ���� �´�." << endl;
		}
		cout << "���������� �� �ϳ��� ���ʽÿ�(0 : ����, 1 : ����, 2 : ��, �� ���� ���� : ���� ����) : ";
		cin >> player;
		Sleep(1000);

		if (player > 2 || player < 0) {
			break;
		}
		else {
			if (player == com) {
				cout << "�����ϴ�." << endl;
			}
			else if (player ==  (++com % 3)) {
				cout << "�̰���ϴ�" << endl;
			}
			else {
				cout << "�����ϴ�." << endl;
			}
		}
	}
}