#include "MainGame.h"

// ������
MainGame::MainGame() : m_nConstValue(0)
{
	_Number = 500;
	cout << "��а� ���⿡ �ڵ�����" << endl;

	/*
	- C++ ���� �����ڿ� ���ؼ� ��� ������ �ʱ�ȭ�ϴ� ��� �̴ϼȶ�������� ����� �����Ѵ�.

	- C++ ����� ��� �̴ϼȶ������� �ʿ��� ������....
	�� 1. ��ü�� ��� ������ �ɺ��� ����� ���ϰ� ���� ���
	�� 2. ��� ���迡�� �θ� Ŭ������ ������ ȣ���� �ʿ��� ���
	*/

}

// �Ҹ���
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
	this ������
	�� �ڱ��ڽ��� �⸮Ű�� ������

	- ��� Ŭ������ ��� �Լ��� �ڱ� �ڽ��� ��Ī�ϴ� this Ű���带 �̿��ϴ� ���� �����ϴ�.

	- this Ű���带 Ȱ���ϸ� �̸� �ߺ��� ���ؼ� �߻��ϴ� �켱 ������ ���� ��ȣ���� ������ ������ �� �ִ�.
	*/
	this->_x = x;
	this->_y = y;
}