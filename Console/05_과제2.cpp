/*
����2 ���� ����ȭ

- ���ݱ��� ��� ������ �����Ѵ�.

- ��� ������ �ߴ��� ����ȭ ���ѿ´�.

Ÿ�� ����. ���������� (if)

- �־��� �ð��ȿ� ���������� ������ �ۼ� �� �����Ͽ� �˻縦 �ް� ����ϸ� OK

- �ð����� : 13��

- ���� ��÷

- 3 X @

���� ����. �迭

- ��Ʈ�� ����´�.

- ������ �� ������ �´�. (EX : �迭�� OOO��.)
*/
#include<iostream>
#include<time.h>
#include<Windows.h>
using namespace std;

int comValue();

void main() {
	srand(time(NULL));
	int com;
	int player;
	bool playerAttack;
	cout << "����� ������ �����մϴ�." << endl;
	do {
		com = comValue();
		cout << endl;
		cout << "���������� �� �ϳ��� ��� ���ʽÿ�.(0 : ����, 1 : ����, 2 : ��, �׿��� ���� : ���� ����) : ";
		cin >> player;
		Sleep(1000);
		if (player > 2 || player < 0) {
			return;
		}
		if (com == player) {
			cout << "�����ϴ�. ������������ �ٽ��մϴ�." << endl;
		}
		else if (com == (player + 1) % 3) {
			cout << "����� �����ϴ�. �������� ����ϴ�." << endl;
			playerAttack = false;
		}
		else {
			cout << "����� �̰���ϴ�. �������� �������ϴ�." << endl;
			playerAttack = true;
		}
	} while (com == player);
	do {
		cout << "���������� �� �ٲ� �� ���� �ϳ� ��� �ֽʽÿ�.(0 : ����, 1 : ����, 2 : ��, �׿��� ���� : ���� ����) : ";
		cin >> player;
		Sleep(1000);
		if (player > 2 || player < 0) {
			return;
		}
		com = comValue();
		cout << endl;
		if (com == player) {
			if (playerAttack) {
				cout << "����� �̰���ϴ�." << endl;
			}
			else {
				cout << "����� �����ϴ�." << endl;
			}
		}
		else if (com == (player + 1) % 3) {
			cout << "��뿡�� �������� �ֽ��ϴ�." << endl;
			playerAttack = false;
		}
		else {
			cout << "�������� ��ſ��� �ֽ��ϴ�." << endl;
			playerAttack = true;
		}
	} while (com != player);
}

int comValue() {
	int com;
	com = rand() % 3;
	switch (com) {
	case 0:
		cout << "��ǻ�Ͱ� ������ �½��ϴ�.";
		break;
	case 1:
		cout << "��ǻ�Ͱ� ������ �½��ϴ�.";
		break;
	case 2:
		cout << "��ǻ�Ͱ� ���� �½��ϴ�.";
		break;
	}
	return com;
}