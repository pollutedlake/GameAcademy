/*
과제4. 슬롯머신

- 초기 소지금 : 1억

- 777 같은 숫자 3개 나올 시 배팅금액의 12배

- 7을 제외한 같은 숫자 3개 나올시 배팅금액의 5배

- 같은 숫자 2개 나올 시 배팅금액의 2배

- 그 외에는 배팅금액 잃기

필수 : 
1. 룰렛이 동작하는 모습 시각화
2. 배팅을 하고 내가 룰렛을 멈추지 않으면 룰렛은 자동으로 계속 반복된다.
3. 치트 필수
ㄴ 치트가 활성화 되면 숫자 3개를 입력 받는다. (EX : 777)
ㄴ 다음으로 룰렛이 시동이 되고 777이 당첨되는걸 확인할 수 있게 만들기
*/
#include<iostream>
#include<time.h>
#include<Windows.h>
#include<thread>
using namespace std;

static bool run = true;
static int input = 2;
static int wantNFirst = 10;
static int wantNSecond = 10;
static int wantNThird = 10;
static int firstN;
static int secondN;
static int thirdN;

void stop(bool& run, int& input) {
	srand(time(NULL));
	firstN = rand() % 10;
	secondN = rand() % 10;
	thirdN = rand() % 10;
	int count = 0;
	while(run) 
	{
		system("cls");
		cout << firstN << secondN << thirdN << endl;
		switch (input)
		{
			case 0:
				count++;
				if (count < 30) 
				{
					secondN = ++secondN % 10;
				}
				if (count < 60)
				{
					thirdN  = ++thirdN % 10;
				}
				else {
					run = false;
				}
				cout << "룰렛을 멈추려면 0을 입력하세요.(1 : 치트)" << endl;
			break;
			case 1:
				if (firstN != wantNFirst)
				{
					firstN = ++firstN % 10;
				}
				if (secondN != wantNSecond || count < 30)
				{
					secondN = ++secondN % 10;
					count++;
				}
				if (thirdN != wantNThird || count < 60)
				{
					thirdN = ++thirdN % 10;
					count++;
				}
				else {
					run = false;
				}
				cout << "원하는 세자리 수를 입력하세요 : " << endl;
			break;
			case 2:
				firstN = ++firstN % 10;
				secondN = ++secondN % 10;
				thirdN = ++thirdN % 10;
				cout << "룰렛을 멈추려면 0을 입력하세요.(1 : 치트)" << endl;
			break;
		}
		Sleep(100);
	}
}

void main() {
	srand(time(NULL));
	int money = 100000000;
	int betting;
	cout << "배팅금액을 입력하세요 : ";
	cin >> betting;
	thread roulette{stop, ref(run), ref(input)};
	cin >> input;
	if (input == 1) {
		int wantN;
		cin >> wantN;
		wantNFirst  = wantN / 100;
		wantNSecond = (wantN % 100) / 10;
		wantNThird = wantN % 10;
	}
	roulette.join();
	if ((firstN == secondN) || (firstN == thirdN) || (secondN == thirdN)) {
		if ((firstN == secondN) && (secondN == thirdN)) {
			if (firstN == 7) {
				money += betting * 12;
			}
			else {
				money += betting * 5;
			}
		}
		else {
			money += betting * 2;
		}
	}
	else {
		money -= betting;
	}
	cout << "현재 소지금 : " << money << endl;
}