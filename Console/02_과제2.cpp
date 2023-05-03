#include<iostream>
#include<time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int num1 = rand() % 4 + 1;
	int num2 = rand() % 13 + 6;
	int num3 = rand() % 166 + 23;
	cout << "1 ~ 5까지의 랜덤 숫자 : " << num1 << endl;
	cout << "6 ~ 19까지의 랜덤 숫자 : " << num2 << endl;
	cout << "23 ~ 189까지의 랜덤 숫자 : " << num3 << endl;
}