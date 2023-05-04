/*
과제1.연산자 활용

- 두 개의 정수를 받아서 두 수의 덧셈과 뺄셈의 결과를 출력하는 프로그램 작성

- 3개의 정수(num1, num2, num3)를 받아서 다음 연산의 결과를 출력하는 프로그램 작성

EX) (num1 + num2)* (num3 + num1) % num1 = ?

-입력받은 두 정수를 나누었을 때 얻게 되는 몫과 나머지를 출력하는 프로그램 작성

EX) 7과 2가 입력되면 몫으로 3, 나머지 1이 출력되면 Ok
*/
#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3;
	cin >> num1 >> num2;
	cout << "두 수의 덧셈 결과 : " << num1 + num2  << endl << "두 수의 뺄셈 결과 : " << num1 - num2 << endl;
	cin >> num1 >> num2 >> num3;
	cout << "(num1 + num2)* (num3 + num1) % num1의 결과값 : " << ((num1 + num2) * (num3 + num1)) % num1 << endl;
}