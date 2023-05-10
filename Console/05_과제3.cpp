/*
과제 1. 숫자 야구

- 0 ~ 9까지의 숫자 중 컴퓨터가 임의로 3개를 뽑는다.

- 컴퓨터가 뽑은 숫자를 플레이어가 임의 숫자 3개를 선택하여 숫자와 자리수까지 맞추는 게임

- 만약 선택한 숫자가 컴퓨터 숫자와 같으나 자리수가 다를 경우
ㄴ 1. 볼 (1B)

- 만약 선택한 숫자가 컴퓨터 숫자와 같고 자리수까지 일치할 경우
ㄴ 1. 스트라이크 (1S)

- 만약 선택한 숫자가 컴퓨터 숫자와 같지 않고 자리수도 일치하지 않으면
ㄴ 1. 아웃 (1 Out)

- 이렇게 한 턴에 3S를 만들경우 몇번만에 맞췄는지 결과를 보여주며 게임 종료

- 필수 : 치트, 배열 X
*/
#include<iostream>
#include<time.h>
using namespace std;

void main()
{
	srand(time(NULL));
	int comFirstN = rand() % 9 + 1;
	int comSecondN;
	int comThirdN;
	do
	{
		comSecondN = rand() % 10;
		comThirdN = rand() % 10;
	} while ((comFirstN == comSecondN) || (comFirstN == comThirdN) || (comSecondN == comThirdN));
	cout << "숫자야구게임을 시작합니다." << endl;
	cout << "상대가 고른 숫자 : " << comFirstN << comSecondN << comThirdN << endl;
	int playerN;
	int tryN = 0;
	do
	{
		do
		{
			int strike = 0;
			int ball = 0;
			int out = 0;
			cout << "3자리 숫자를 입력하세요. : ";
			cin >> playerN;
			int playerFirstN = playerN / 100;
			int playerSecondN = (playerN - playerFirstN * 100) / 10;
			int playerThirdN = playerN -  playerFirstN * 100 - playerSecondN * 10;
			if (comFirstN == playerFirstN) {
				strike++;
			}
			else if (comFirstN == playerSecondN) {
				ball++;
			}
			else if (comFirstN == playerThirdN) {
				ball++;
			}
			else {
				out++;
			}
			if (comSecondN == playerFirstN) {
				ball++;
			}
			else if (comSecondN == playerSecondN) {
				strike++;
			}
			else if (comSecondN == playerThirdN) {
				ball++;
			}
			else {
				out++;
			}
			if (comThirdN == playerFirstN) {
				ball++;
			}
			else if (comThirdN == playerSecondN) {
				ball++;
			}
			else if (comThirdN == playerThirdN) {
				strike++;
			}
			else {
				out++;
			}
			cout << strike << "S " << ball << "B " << out << "out" << endl;
			tryN++;
		} while (playerN / 100 == 0);
	} while (playerN != comFirstN * 100 + comSecondN * 10 + comThirdN);
	cout << "맞았습니다." << endl;
	cout << tryN << "회 시도하였습니다." << endl;
}