#include<iostream>
#include<time.h>
#include<Windows.h>
using namespace std;

void main() {
	srand(time(NULL));
	for(int i = 0; i < 5; i++){
		int comNum = rand()%3;
		int playerNum;
		cout << "���������� ������ �����մϴ�.\n";
		switch (comNum) {
		case 0:
			cout << "��ǻ�Ͱ� ������ �½��ϴ�.\n";
			break;
		case 1:
			cout << "��ǻ�Ͱ� ������ �½��ϴ�.\n";
			break;
		case 2:
			cout << "��ǻ�Ͱ� ���� �½��ϴ�.\n";
			break;
		}
		cout << "������������ �ϳ��� ��� �Է��ϼ���(0 : ����, 1 : ����, 2 : ��, �׿��� ���� : ���α׷� ����) : ";
		cin >> playerNum;
		Sleep(1000);
		if (playerNum > 2 || playerNum < 0) {
			break;
		}
		if (comNum == playerNum) {
			cout << "�����ϴ�.\n";
		}
		else if (comNum == (playerNum + 1) % 3) {
			cout << "�����ϴ�.\n";
		}
		else {
			cout << "�̰���ϴ�.\n";
		}
	}
}