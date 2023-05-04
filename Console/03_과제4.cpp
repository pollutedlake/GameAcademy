/*
과제4. 마름모 찍기
*/

#include<iostream>
using namespace std;

int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5 - i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5 - i; j++) {
			if (j == 5 - i) {
				break;
			}
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (j == i + 1) {
				break;
			}
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < 11; i++) {
		if (i < 6) {
			for (int j = 0; j < 5 - i; j++) {
				cout << " ";
			}
			for (int k = 1; k <= 2 * (i + 1); k++) {
				cout << "*";
			}
		}
		else {
			for (int j = 0; j < i - 5; j++) {
				cout << " ";
			}
			for (int k = 1; k <= 10 - 2 * (i - 6); k++) {
				cout << "*";
			}
		}

		cout << endl;
		
	}
}