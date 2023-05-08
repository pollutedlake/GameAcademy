/*
과제2. 일수 출력기

- if 문과 switch문 중에 본인이 판단해 효율적인 것을 선택한다.

- 시작하면 사용자의 입력을 받고 입력한 숫자에 따라 ??일 인지 출력

EX) 4 입력시 -> 4월은 30일입니다 -> 다시 커맨드 활성화

- 1월부터 12월까지 확인이 가능해야 하고 이외의 숫자는 예외처리
- 총 5번을 입력하면 프로그램 종료

한줄 조사. 함수

- 노트에 적어온다.

-비유할것 생각해 온다. (EX: 함수는 OOO이다.)
*/
#include<iostream>
using namespace std;

int main() {
	int month;
	for (int i = 0; i < 5; i++) {
		cout << "일수를 알고 싶은 달을 입력하세요. 1 ~ 12 외의 달을 입력하면 프로그램이 종료됩니다. : ";
		cin >> month;
		if (month == 2) {
			cout << month << "월은 28일입니다.\n";
		}
		else if (month <= 7 && month >= 1) {
			if (month % 2 == 0) {
				cout << month << "월은 30일입니다.\n";
			}
			else {
				cout << month << "월은 31일입니다.\n";
			}
		}
		else if(month > 7 && month <= 12){
			if (month % 2 == 0) {
				cout << month << "월은 31입니다.\n";
			}
			else {
				cout << month << "월은 30일입니다.\n";
			}
		}
		else {
			break;
		}
	}
}