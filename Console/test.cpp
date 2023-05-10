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

static int i = 0;

void func2(int j);
void func2(int j) {
	int k;
	cin >> k;
}

void func() {
	int firstN = rand() % 10;
	int secondN = rand() % 10;
	int thirdN = rand() % 10;
	cout << firstN << secondN << thirdN << "\t 룰렛을 멈추려면 0을 입력하세요.";
	Sleep(100);
	system("cls");
	func2(i++);

}



void main() 
{
	srand(time(NULL));
	int a = 0;
	A:
	cout<<"test1"<<endl;
	cin >> a;
	Sleep(1);
	cout << "test2" << endl;
	//func();
	goto A;
}