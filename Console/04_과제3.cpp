/*
도전 과제1. 함수와 포인터를 활용해 가위바위보 완성

- 양식은 수정하면 안되며 메인함수에서는 함수 호출 이외에는 아무것도 작성을 할 수 없다.
*/
#include<iostream>
#include<time.h>
#include<Windows.h>
using namespace std;

// a : 가위, b : 바위, c : 적
// a, b, c를 주소를 받아서 실행

static int a = 0;		// 가위
static int rock = 1;	// 바위
static int* b = &rock;	// 바위의 주소
int comNum;				// 컴퓨터 숫자
static int* addressComNum = &comNum;		// 컴퓨터 숫자의 주소
static int** c = &addressComNum;			// 컴퓨터 숫자의 주소의 주소
/*static int scissors = 0;
static int rock = 1;
static int* rockAddress = &rock;
static int comNum;
static int* comNumAddress = &comNum;
static int** comNumAddressAddress = &comNumAddress;
static int* a = &scissors;
static int** b = &rockAddress;
static int*** c = &comNumAddressAddress;*/

void Function(int* a, int** b, int*** c) {
	srand(time(NULL));
	while (true) {
		****&c = rand() % 3;

		cout << "가위바위보 게임을 시작합니다." << endl;
		if (****&c == 0) {
			cout << "컴퓨터가 가위를 냈다." << endl;
		}
		else if (****&c == 1) {
			cout << "컴퓨터가 바위를 냈다." << endl;
		}
		else if (****&c == 2) {
			cout << "컴퓨터가 보를 냈다." << endl;
		}
		int player;
		cout << "가위바위보 중 하나를 내십시오(0 : 가위, 1 : 바위, 2 : 보, 그 외의 숫자 : 게임 종료) : ";
		cin >> player;
		Sleep(1000);

		if (player > 2 || player < 0) {
			break;
		}
		else {
			if (player == ****&c) {
				cout << "비겼습니다." << endl;
			}
			else if (player == **&a) {
				if (****&c == ***&b) {
					cout << "졌습니다." << endl;
				}
				else {
					cout << "이겼습니다" << endl;
				}
			}
			else if(player == ***&b){
				if (****&c == **&a) {
					cout << "이겼습니다." << endl;
				}
				else {
					cout << "졌습니다." << endl;
				}
			}
			else {
				if (****&c == **&a) {
					cout << "졌습니다." << endl;
				}
				else {
					cout << "이겼습니다." << endl;
				}
			}
		}
	}
}

void main() {
	Function(&a, &b, &c);		// 가위의 주소, 바위의 주소의 주소, 컴퓨터 숫자의 주소의 주소의 주소를 매개변수로
}