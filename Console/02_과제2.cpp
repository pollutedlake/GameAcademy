#include<iostream>
#include<time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int num1 = rand() % 4 + 1;
	int num2 = rand() % 13 + 6;
	int num3 = rand() % 166 + 23;
	cout << "1 ~ 5������ ���� ���� : " << num1 << endl;
	cout << "6 ~ 19������ ���� ���� : " << num2 << endl;
	cout << "23 ~ 189������ ���� ���� : " << num3 << endl;
}