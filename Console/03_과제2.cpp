/*
과제2. 반복문 출력

- for / while / do ~ while 3가지 버전으로
ㄴ 20에서 1까지 출력
ㄴ 1부터 20까지 출력 -> 단, 짝수만
ㄴ 배운것 이외에는 사용금지
*/
#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 20; i++) {
		cout << 20 - i << endl;
	}
	cout << endl;
	for (int i = 1; i <= 10; i++) {
		cout << i * 2 << endl;
	}
	cout << endl;

	int i = 0;
	while (i < 20) {
		cout << 20 - i << endl;
		i++;
	}
	cout << endl;
	i = 1;
	while (i <= 10) {
		cout << i * 2 << endl;
		i++;
	}
	cout << endl;
	i = 0;
	do {
		cout << 20 - i << endl;
		i++;
	} while (i < 20);
	cout << endl;
	i = 1;
	do {
		cout << i * 2 << endl;
		i++;
	} while (i <= 10);
}