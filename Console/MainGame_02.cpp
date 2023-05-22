#include "MainGame_02.h"

MainGame_02::MainGame_02()
{
	// 3. �ν��Ͻ��� �ø���.
	_Player = new Player_01;
	_Player->setHP(100);

	cout << "�÷��̾� ���� ü�� : " << _Player->getHP() << endl;

	cout << "���� ����(1��), ���� ����(2��), ����(3��), ��� ����(4��), ü�� ��� ����(5��)" << endl;

	int Input;
	bool poison = false;
	bool heal = false;

	while (true)
	{
		cin >> Input;
		if (Input == 1)
		{
			_Player->setHP(_Player->getHP() + 100);
		}
		else if (Input == 2)
		{
			_Player->setHP(_Player->getHP() + 500);
		}
		else if (Input == 3)
		{
			poison = true;
		}
		else if (Input == 4)
		{
			_Player->setHP(0);
		}
		else if (Input == 5)
		{
			heal = true;
		}
		else
		{
			cout << "���� ��?" << endl;
		}
		if (poison)
		{
			_Player->setHP(_Player->getHP() * 4 / 5);
		}
		if (heal)
		{
			_Player->setHP(_Player->getHP() * 1.07);
		}

		if (_Player->getHP() <= 0)
		{
			cout << "�׾����ϴ�.\n";
			break;
		}
		cout << endl;

		cout << "������� �� ü�� : ";
		cout << _Player->getHP() << endl;
	}

	/*
	�� �ǽ�

	1. ������ ����� ����
	�� ��Ʈ ������ (�ϴ� ü���� -20%)
	
	2. ��� ������ ������.
	�� �ѹ��� ���

	3. �÷��̾� ü���� 0���Ϸ� �������� ������ ���� ó���Ѵ�.

	4. ü�� ��� ���� ������.
	���������� ü��ȸ��(�÷��̾� ü�� 7%)
	*/
}

// �Ҹ��� : �����ڿ��� new�� ��������� �̰����� delete�Ѵ�.
MainGame_02::~MainGame_02()
{
	delete _Player;
}