#include<iostream>
#include<time.h>
#include<Windows.h>
// Sleep(1000) : 1�� ���� �����.
// Sleep(500) : 0.5�� ���� �����.
using namespace std;

// �ݺ��� + ���ǹ� + ������

// ���ٿ� ����
// �������� -> ȿ���� ���� ����
// ��ü���� -> ���踦 ���� ����

void main() {
	srand(time(NULL));
	int myNumber;
	int comNumber;

	comNumber = rand() % 100 + 1;
	// cout << "ġƮ : " << comNumber << endl;

	while (true) {
		cout << "1 ~ 100���� ���� �� �ϳ��� ��������." << endl;
		cin >> myNumber;
		Sleep(1000);
		if (myNumber == comNumber) {
			cout << "== ã�Ҵ� ==" << endl;
			Sleep(3000);
			system("cls");		// Windows.h "cls" = clean system
		}

		else if (myNumber > comNumber) {
			cout << "�� �������� ������ ����" << endl;
		}

		else {
			cout << "�� ū ���� ������ ����" << endl;
		}
		cout << endl;
	}
}