#include "MainGame.h"

// 생성자
MainGame::MainGame() : m_nConstValue(0)
{
	_Number = 500;
	cout << "당분간 여기에 코딩하자" << endl;

	/*
	- C++ 언어는 생성자에 한해서 멤버 변수를 초기화하는 멤버 이니셜라이저라는 기능을 제공한다.

	- C++ 언어의 멤버 이니셜라이저가 필요한 순간은....
	ㄴ 1. 객체의 멤버 변수로 심볼릭 상수를 지니고 있을 경우
	ㄴ 2. 상속 관계에서 부모 클래스의 생성자 호출이 필요한 경우
	*/

}

// 소멸자
MainGame::~MainGame()
{
	// ! Do Nothing
}

void MainGame::outPut()
{
	cout << _Number << endl;
}

void MainGame::showPosition(void)
{
	cout << "x : " << _x << "\ty : " << _y << endl;
}

void MainGame::movePosition(void)
{
	_x += 100;
	_y += 100;
}

void MainGame::setPosition(int x, int y)
{
	/*
	this 포인터
	ㄴ 자기자신을 기리키는 포인터

	- 모든 클래스의 멤버 함수는 자기 자신을 지칭하는 this 키워드를 이용하는 것이 가능하다.

	- this 키워드를 활용하면 이름 중복에 의해서 발생하는 우선 순위에 대한 모호함을 완전히 배제할 수 있다.
	*/
	this->_x = x;
	this->_y = y;
}