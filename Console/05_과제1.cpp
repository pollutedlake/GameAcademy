/*
과제1 가위바위보

- 스위치문을 이용해 만든다.

- 치트 기능과 배팅 기능 추가
ㄴ 초기 소지금 : 10,000원
ㄴ 최소 배팅은 1,000원부터

- 5판을 하거나 내가 가진 돈을 전부 잃으면 게임 종료

- 이기면 판돈에 x3를 얻고 지면 판돈에 x7배를 잃는다.

- 비길 경우 판돈에 x5배를 얻는다.
*/
#include<iostream>
#include<time.h>
#include<Windows.h>

using namespace std;

int main() {
	srand(time(NULL));
	int money = 10000;
	int betting;
	for (int i = 0; (i < 5) && money > 0; i++) {
		int player;
		cout << "가위바위보를 시작합니다." << endl;
		do {
			cout << "배팅할 금액을 입력하세요 : ";
			cin >> betting;
			switch (betting > money) {
			case 1:
				printf("배팅할 금액이 소지금보다 많습니다. 현재 소지금 : %d\n", money);
				break;
			}
		} while (betting > money);
		int com = rand() % 3 + 3;
		switch (com) {
		case 3:
			cout << "컴퓨터가 가위를 냈습니다." << endl;
			break;
		case 4:
			cout << "컴퓨터가 바위를 냈습니다." << endl;
			break;
		case 5:
			cout << "컴퓨터가 보를 냈습니다." << endl;
			break;
		}
		cout << "가위바위보 중 하나를 내십시오.(0 : 가위, 1 : 바위, 2 : 보, 그 외의 숫자 : 프로그램 종료) : ";
		cin >> player;
		Sleep(1000);

		switch (player > 2 || player < 0) {
		case 1:
			return 0;
			break;
		}
		switch ((com - player) % 3) {
		case 0:
			cout << "비겼습니다." << endl;
			money += betting * 5;
			break;
		case 1:
			cout << "졌습니다." << endl;
			money -= betting * 7;
			break;
		case 2:
			cout << "이겼습니다." << endl;
			money += betting * 3;
			break;
		}
		cout << "현재 소지금 : " << money << endl;
	}
}