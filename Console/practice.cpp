#include<iostream>
#include<time.h>
#include<Windows.h>
using namespace std;

void main() {
	srand(time(NULL));
	for(int i = 0; i < 5; i++){
		int comNum = rand()%3;
		int playerNum;
		cout << "가위바위보 게임을 시작합니다.\n";
		switch (comNum) {
		case 0:
			cout << "컴퓨터가 가위를 냈습니다.\n";
			break;
		case 1:
			cout << "컴퓨터가 바위를 냈습니다.\n";
			break;
		case 2:
			cout << "컴퓨터가 보를 냈습니다.\n";
			break;
		}
		cout << "가위바위보중 하나를 골라 입력하세요(0 : 가위, 1 : 바위, 2 : 보, 그외의 숫자 : 프로그램 종료) : ";
		cin >> playerNum;
		Sleep(1000);
		if (playerNum > 2 || playerNum < 0) {
			break;
		}
		if (comNum == playerNum) {
			cout << "비겼습니다.\n";
		}
		else if (comNum == (playerNum + 1) % 3) {
			cout << "졌습니다.\n";
		}
		else {
			cout << "이겼습니다.\n";
		}
	}
}