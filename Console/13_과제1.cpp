/*
���� 1. ���� �߱� Ŭ������ ������

- �ΰ��� ����
�� 1. ����ȭ�� �ִ� ���� 1��
�� 2. Ŭ������ �ּ� 8�� �ִ� ���� 1��

- ���� �Լ����� Ŭ������ ������ ���ϴ� ������ �÷��� �� �� �ְ� �����.

*/
#include "13_����1.h"

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
	cout << "������ ������ �ּ���(0 : ����ȭ�� �ִ� ����, 1 : Ŭ������ �ּ� 8�� �ִ� ����) : ";
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