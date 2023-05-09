/*
과제2 복습 구현화

- 지금까지 배운 내용을 복습한다.

- 어떻게 복습을 했는지 구현화 시켜온다.

타임 어택. 가위바위보 (if)

- 주어진 시간안에 가위바위보 로직을 작성 후 실행하여 검사를 받고 통과하면 OK

- 시간제한 : 13분

- 깜지 당첨

- 3 X @

한줄 조사. 배열

- 노트에 적어온다.

- 비유할 것 생각해 온다. (EX : 배열은 OOO다.)
*/
#include<iostream>
#include<time.h>
#include<Windows.h>
using namespace std;

int comValue();

void main() {
	srand(time(NULL));
	int com;
	int player;
	bool playerAttack;
	cout << "묵찌빠 게임을 시작합니다." << endl;
	do {
		com = comValue();
		cout << endl;
		cout << "가위바위보 중 하나를 골라 내십시오.(0 : 가위, 1 : 바위, 2 : 보, 그외의 숫자 : 게임 종료) : ";
		cin >> player;
		Sleep(1000);
		if (player > 2 || player < 0) {
			return;
		}
		if (com == player) {
			cout << "비겼습니다. 가위바위보를 다시합니다." << endl;
		}
		else if (com == (player + 1) % 3) {
			cout << "당신이 졌습니다. 선공권을 뺏깁니다." << endl;
			playerAttack = false;
		}
		else {
			cout << "당신이 이겼습니다. 선공권을 가져갑니다." << endl;
			playerAttack = true;
		}
	} while (com == player);
	do {
		cout << "가위바위보 중 바꿔 낼 것을 하나 골라 주십시오.(0 : 가위, 1 : 바위, 2 : 보, 그외의 숫자 : 게임 종료) : ";
		cin >> player;
		Sleep(1000);
		if (player > 2 || player < 0) {
			return;
		}
		com = comValue();
		cout << endl;
		if (com == player) {
			if (playerAttack) {
				cout << "당신이 이겼습니다." << endl;
			}
			else {
				cout << "당신이 졌습니다." << endl;
			}
		}
		else if (com == (player + 1) % 3) {
			cout << "상대에게 선공권이 있습니다." << endl;
			playerAttack = false;
		}
		else {
			cout << "선공권이 당신에게 있습니다." << endl;
			playerAttack = true;
		}
	} while (com != player);
}

int comValue() {
	int com;
	com = rand() % 3;
	switch (com) {
	case 0:
		cout << "컴퓨터가 가위를 냈습니다.";
		break;
	case 1:
		cout << "컴퓨터가 바위를 냈습니다.";
		break;
	case 2:
		cout << "컴퓨터가 보를 냈습니다.";
		break;
	}
	return com;
}