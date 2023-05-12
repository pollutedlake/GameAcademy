/*
과제2. 복습 과제

- 두 정수의 합을 구하는 프로그램 작성

- 두 개의 숫자를 사용자를 통해 입력 받는다.

- 입력한 두 숫자 사이의 합을 출력하면 OK

- 예외처리 : 5를 누르고 1을 누른다. -> X

- 숫자의 합이 100이상이면 프로그램은 자동으로 종료된다.

EX) 1과 5를 입력 -> 결과값 : 9
*/
#include "06_과제4.h"

namespace ASSIGNMENT_4
{
	void sum() {
		cout << "두 정수 사이의 수들의 합을 구하는 프로그램\n";
		int num1, num2;
		do
		{
			cout << "두 정수 중 큰 값을 입력하세요 : ";
			cin >> num1;
			cout << "두 정수 중 작은 값을 입력하세요 : ";
			cin >> num2;
			if (num1 <= num2)
			{
				cout << "잘못 입력하셨습니다. 두 정수 중 큰 값을 먼저 입력하고 작은 값을 다음에 입력하세요\n";
			}
		} while (num1 <= num2);
		int sum = (num1 + num2) * ((num1 - num2 - 1) / 2);
		if ((num1 - num2 - 1) % 2)
		{
			sum += ((num1 + num2) / 2);
		}
		cout << sum << endl;
	}
}