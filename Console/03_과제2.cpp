/*
����2. �ݺ��� ���

- for / while / do ~ while 3���� ��������
�� 20���� 1���� ���
�� 1���� 20���� ��� -> ��, ¦����
�� ���� �̿ܿ��� ������
*/
#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 20; i++) {
		cout << 20 - i << " ";
	}
	cout << endl << endl;
	for (int i = 1; i <= 10; i++) {
		cout << i * 2 << " ";
	}
	cout << endl << endl;

	int i = 0;
	while (i < 20) {
		cout << 20 - i << " ";
		i++;
	}
	cout << endl << endl;
	i = 1;
	while (i <= 10) {
		cout << i * 2 <<  " ";
		i++;
	}
	cout << endl << endl;
	i = 0;
	do {
		cout << 20 - i << " ";
		i++;
	} while (i < 20);
	cout << endl << endl;
	i = 1;
	do {
		cout << i * 2 << " ";
		i++;
	} while (i <= 10);
}