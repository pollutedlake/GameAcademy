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
using namespace std;

void main() {
	srand(time(NULL));
	int money = 100000000;
	int betting;
	cout << "배팅금액을 입력하세요 : ";
	cin >> betting;
	int firstN = rand() % 10;
	int secondN = rand() % 10;
	int thirdN = rand() % 10;
	do
	{
		cout << firstN << secondN << thirdN << "\t 룰렛을 멈추려면 0을 입력하세요.";
		firstN = ++firstN % 10;
		secondN = ++secondN % 10;
		thirdN = ++thirdN % 10;
		Sleep(100);
		system("cls");
	} while (true);
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