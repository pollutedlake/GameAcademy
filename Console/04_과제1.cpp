/*
과제 1. 가위바위보 게임

- if문을 이용해 만든다.
ㄴ switch 문은 사용하지 않는다.

- 게임의 진행 횟수는 총 5판]
ㄴ 이후는 게임 종료

필수: 치트
*/
#include<iostream>
#include<time.h>
#include<Windows.h>
using namespace std;

int main() {
	srand(time(NULL));
	while (true) {
		int player;
		int com = rand() % 3;
		cout << "가위바위보 게임을 시작합니다." << endl;
		if (com == 0) {
			cout << "컴퓨터가 가위를 냈다." << endl;
		}
		else if (com == 1) {
			cout << "컴퓨터가 바위를 냈다." << endl;
		}
		else if (com == 2) {
			cout << "컴퓨터가 보를 냈다." << endl;
		}
		cout << "가위바위보 중 하나를 내십시오(0 : 가위, 1 : 바위, 2 : 보, 그 외의 숫자 : 게임 종료) : ";
		cin >> player;
		Sleep(1000);

		if (player > 2 || player < 0) {
			break;
		}
		else {
			if (player == com) {
				cout << "비겼습니다." << endl;
			}
			else if (player ==  (++com % 3)) {
				cout << "이겼습니다" << endl;
			}
			else {
				cout << "졌습니다." << endl;
			}
		}
	}
}