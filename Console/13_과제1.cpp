/*
과제 1. 숫자 야구 클래스로 나누기

- 두가지 버전
ㄴ 1. 가상화가 있는 버전 1개
ㄴ 2. 클래스가 최소 8개 있는 버전 1개

- 메인 함수에서 클래스를 선택해 원하는 버전을 플레이 할 수 있게 만든다.

*/
#include "13_과제1.h"

NumBaseBall::NumBaseBall()
{
	classes8 = new Classes8;
	virtualization = new Virtualization;
}

NumBaseBall::~NumBaseBall()
{
	delete classes8;
	delete virtualization;
}

void NumBaseBall::gameStart()
{
	cout << "버전을 선택해 주세요(0 : 가상화가 있는 버전, 1 : 클래스가 최소 8개 있는 버전) : ";
	int version;
	cin >> version;
	if (version)
	{
		classes8->gameStart();
	}
	else
	{
		virtualization->playeGame();
	}
}