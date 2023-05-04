/*
과제3. 반복문 숙달

- 정수 하나를 입력 받아 -5씩 반복적으로 연산되는 식을 만든다.

- 종료조건 : - 15를 넘어가면 탈출

- 조건 : 입력 받은 값은 -10 ~ 10사이의 숫자여야 하고 이외의 값 입력시 그냥 종료시킨다.

EX) cin >> num (-10 ~ 10)

※ 조건식과 논리 연산자를 잘 보고 조건식을 만들어 while문이 돌아가게 만든다.

*/
#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "-10 ~ 10 사이의 정수 하나를 입력하세요(이외의 값 입력시 종료) : ";
	cin >> num;
	int num2 = num;
	while (num >= -10 && num <= 10) {
		while (num2 - 5 >= -15) {
			num2 -= 5;
			cout << num2 << endl;
		}
		num = -12;
	}
}