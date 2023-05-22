#include "MainGame_02.h"

MainGame_02::MainGame_02()
{
	// 3. 인스턴스로 올린다.
	_Player = new Player_01;
	_Player->setHP(100);

	cout << "플레이어 현재 체력 : " << _Player->getHP() << endl;

	cout << "소형 물약(1번), 대형 물약(2번), 독약(3번), 즉사 물약(4번), 체력 재생 물약(5번)" << endl;

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
			cout << "깜지 콜?" << endl;
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
			cout << "죽었습니다.\n";
			break;
		}
		cout << endl;

		cout << "물약먹은 후 체력 : ";
		cout << _Player->getHP() << endl;
	}

	/*
	※ 실습

	1. 독약을 만들어 보자
	ㄴ 도트 데미지 (턴당 체력의 -20%)
	
	2. 즉사 물약을 만들자.
	ㄴ 한번에 사망

	3. 플레이어 체력이 0이하로 내려가면 음수값 예외 처리한다.

	4. 체력 재생 물약 만들자.
	ㄴ지속적인 체력회복(플레이어 체력 7%)
	*/
}

// 소멸자 : 생성자에서 new를 사용했으면 이곳에서 delete한다.
MainGame_02::~MainGame_02()
{
	delete _Player;
}