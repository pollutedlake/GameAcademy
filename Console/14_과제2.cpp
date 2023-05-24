#include "14_과제2.h"
/*
26일까지 -> 3일의 시간
과제2. STL 벡터 상점

※ 포트폴리오 기능

- 대표 도트 1종씩 (무기 + 방어구 + 포션 (악세서리))

- 필수 : 
ㄴ 아이템 구매 및 판매 기능
ㄴ 구매한 아이템은 착용이 가능해야 한다.
ㄴ 아이템의 능력치에 따라 캐릭터의 능력치가 상승
ㄴ 아이템 이름 가격, 능력치, 설명에 대한 출력 문구

- 상점에 입장하면 아이템 분류가 나온다.
ㄴ 1. 방어구		2. 무기		3. 포션 등등

- 각 메뉴별로 자유럽게 전환이 가능해야 한다.
*/
#include "14_과제2.h"

Shop::Shop()
{
	player = new Player;
}

Shop::~Shop()
{
	delete player;
}

void Shop::startShopping()
{
	while (true)
	{
		switch (printDoWhat())
		{
		case 0:
			printEquipmentType();
			break;
		case 1:
			system("cls");
			break;
		case 2:
			system("cls");
			break;
		default:
			return;
			break;
		}
	}
}

void Shop::linePrint()
{
	cout << "===================================================================" << endl;
}

int Shop::printDoWhat()
{
	system("cls");
	linePrint();
	cout << "즐거운 쇼핑시간" << endl;
	linePrint();
	cout << "0 : 장비 구매\t1 : 장비 판매\t2 : 장비 착용\t그 외 : 쇼핑종료" << endl;
	linePrint();
	int choice;
	cin >> choice;
	return choice;
}

int Shop::printEquipmentType()
{
	int choice;
	system("cls");
	linePrint();
	cout << "구매할 장비의 종류를 선택해 주세요\n";
	cout << "0 : 무기, 1 : 방어구, 2 : 악세서리, 그 외 : 뒤로가기\n";
	linePrint();
	textColor(15, 15);
	cout << "□□□□□□□□□□□□□";
	textColor(0, 0);
	cout << "□□□\n";

	textColor(15, 15);
	cout << "□□□□□□□□□□□□";
	textColor(0, 0);
	cout << "□□";
	textColor(4, 4);
	cout << "□";
	textColor(0, 0);
	cout << "□\n";

	textColor(15, 15);
	cout << "□□□□□□□□□□□";
	textColor(0, 0);
	cout << "□□";
	textColor(4, 4);
	cout << "□";
	textColor(0, 0);
	cout << "□□\n";

	textColor(15, 15);
	cout << "□□□□□□□□□□";
	textColor(0, 0);
	cout << "□□";
	textColor(4, 4);
	cout << "□";
	textColor(0, 0);
	cout << "□□";
	textColor(15, 15);
	cout << "□\n";

	textColor(15, 15);
	cout << "□□□□□□□□□";
	textColor(0, 0);
	cout << "□□";
	textColor(4, 4);
	cout << "□";
	textColor(0, 0);
	cout << "□□";
	textColor(15, 15);
	cout << "□□\n";

	textColor(15, 15);
	cout << "□□□□□□□□";
	textColor(0, 0);
	cout << "□□";
	textColor(4, 4);
	cout << "□";
	textColor(0, 0);
	cout << "□□";
	textColor(15, 15);
	cout << "□□□\n";

	textColor(15, 15);
	cout << "□□";
	textColor(0, 0);
	cout << "□□";
	textColor(15, 15);
	cout << "□□□";
	textColor(0, 0);
	cout << "□□";
	textColor(4, 4);
	cout << "□";
	textColor(0, 0);
	cout << "□□";
	textColor(15, 15);
	cout << "□□□□\n";

	textColor(15, 15);
	cout << "□";
	textColor(0, 0);
	cout << "□□";
	textColor(8, 8);
	cout << "□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□";
	textColor(0, 0);
	cout << "□□";
	textColor(4, 4);
	cout << "□";
	textColor(0, 0);
	cout << "□□";
	textColor(15, 15);
	cout << "□□□□□\n";

	textColor(0, 0);
	cout << "□□";
	textColor(8, 8);
	cout << "□□";
	textColor(0, 0);
	cout << "□□□";
	textColor(4, 4);
	cout << "□";
	textColor(0, 0);
	cout << "□□";
	textColor(15, 15);
	cout << "□□□□□□\n";

	textColor(15, 15);
	cout << "□";
	textColor(0, 0);
	cout << "□□□";
	textColor(8, 8);
	cout << "□";
	textColor(0, 0);
	cout << "□";
	textColor(4, 4);
	cout << "□";
	textColor(0, 0);
	cout << "□□";
	textColor(15, 15);
	cout << "□□□□□□□\n";

	textColor(15, 15);
	cout << "□□□□";
	textColor(8, 8);
	cout << "□";
	textColor(0, 0);
	cout << "□□□";
	textColor(15, 15);
	cout << "□□□□□□□□\n";

	textColor(15, 15);
	cout << "□□□";
	textColor(0, 0);
	cout << "□";
	textColor(9, 9);
	cout << "□";
	textColor(8, 8);
	cout << "□□";
	textColor(0, 0);
	cout << "□□";
	textColor(15, 15);
	cout << "□□□□□□□\n";

	textColor(15, 15);
	cout << "□□";
	textColor(0, 0);
	cout << "□";
	textColor(4, 4);
	cout << "□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□";
	textColor(0, 0);
	cout << "□";
	textColor(8, 8);
	cout << "□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□□□□□\n";

	textColor(0, 0);
	cout << "□□";
	textColor(10, 10);
	cout << "□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□";
	textColor(0, 0);
	cout << "□";
	textColor(8, 8);
	cout << "□";
	textColor(0, 0);
	cout << "□□";
	textColor(15, 15);
	cout << "□□□□□□\n";

	textColor(15, 15);
	cout << "□";
	textColor(0, 0);
	cout << "□□";
	textColor(15, 15);
	cout << "□□□";
	textColor(0, 0);
	cout << "□□□";
	textColor(15, 15);
	cout << "□□□□□□□\n";

	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□□□□□□□\n";
	textColor(15, 0);
	cout << "무기\n";
	linePrint();
	linePrint();
	textColor(15, 15);
	cout << "□□□";
	textColor(0, 0);
	cout << "□□";
	textColor(15, 15);
	cout << "□□□□";
	textColor(0, 0);
	cout << "□□";
	textColor(15, 15);
	cout << "□□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□";
	textColor(0, 0);
	cout << "□□";
	textColor(9, 9);
	cout << "□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□";
	textColor(0, 0);
	cout << "□";
	textColor(9, 9);
	cout << "□□";
	textColor(0, 0);
	cout << "□□";
	textColor(15, 15);
	cout << "□";
	textColor(0, 0);
	cout << "\n";

	textColor(0, 0);
	cout << "□";
	textColor(9, 9);
	cout << "□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□";
	textColor(0, 0);
	cout << "□";
	textColor(9, 9);
	cout << "□□□□";
	textColor(0, 0);
	cout << "□\n";

	textColor(0, 0);
	cout << "□";
	textColor(9, 9);
	cout << "□□";
	textColor(15, 15);
	cout << "□□";
	textColor(9, 9);
	cout << "□";
	textColor(0, 0);
	cout << "□□";
	textColor(9, 9);
	cout << "□□□□□";
	textColor(0, 0);
	cout << "□\n";

	textColor(0, 0);
	cout << "□";
	textColor(9, 9);
	cout << "□□";
	textColor(15, 15);
	cout << "□";
	textColor(9, 9);
	cout << "□□□□□□□□□□";
	textColor(0, 0);
	cout << "□\n";

	textColor(15, 15);
	cout << "□";
	textColor(0, 0);
	cout << "□";
	textColor(9, 9);
	cout << "□□□□□□□□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□";
	textColor(0, 0);
	cout << "□";
	textColor(9, 9);
	cout << "□□□□□□□□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□□";
	textColor(0, 0);
	cout << "□";
	textColor(9, 9);
	cout << "□□□□□□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□□";
	textColor(0, 0);
	cout << "□";
	textColor(9, 9);
	cout << "□□□□□□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□□";
	textColor(0, 0);
	cout << "□";
	textColor(9, 9);
	cout << "□□□□□□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□□";
	textColor(0, 0);
	cout << "□";
	textColor(9, 9);
	cout << "□□□□□□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□□□";
	textColor(0, 0);
	cout << "□";
	textColor(9, 9);
	cout << "□□□□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□□□□";
	textColor(0, 0);
	cout << "□□□□□□□";
	textColor(15, 15);
	cout << "□□□□";
	textColor(15, 0);
	cout << "\n";
	cout << "방어구\n";
	linePrint();
	linePrint();
	textColor(15, 15);
	cout << "□□□";
	textColor(0, 0);
	cout << "□□□□□□□□□□□□□";
	textColor(15, 15);
	cout << "□□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□□□";
	textColor(0, 0);
	cout << "□";
	textColor(9, 9);
	cout << "□□□□□□□□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□□□";
	textColor(0, 0);
	cout << "□";
	textColor(9, 9);
	cout << "□□□□□□□□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□□□□□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□□";
	textColor(12, 12);
	cout << "□□□";
	textColor(15, 15);
	cout << "□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□";
	textColor(12, 12);
	cout << "□□□□□";
	textColor(15, 15);
	cout << "□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□□□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□";
	textColor(12, 12);
	cout << "□□□";
	textColor(15, 15);
	cout << "□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□□□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□□□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□";
	textColor(12, 12);
	cout << "□";
	textColor(15, 15);
	cout << "□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□□□□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□□□□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□";
	textColor(12, 12);
	cout << "□";
	textColor(15, 15);
	cout << "□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□□□□□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□□□□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□";
	textColor(12, 12);
	cout << "□";
	textColor(15, 15);
	cout << "□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□□□□□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□□□□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□";
	textColor(12, 12);
	cout << "□";
	textColor(15, 15);
	cout << "□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□□□□□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□□□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□";
	textColor(12, 12);
	cout << "□";
	textColor(15, 15);
	cout << "□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□□□□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□";
	textColor(12, 12);
	cout << "□□□";
	textColor(15, 15);
	cout << "□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□□□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□";
	textColor(12, 12);
	cout << "□□□□□";
	textColor(15, 15);
	cout << "□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□□□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□";
	textColor(12, 12);
	cout << "□□□□□";
	textColor(15, 15);
	cout << "□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□";
	textColor(12, 12);
	cout << "□□□□□□□";
	textColor(15, 15);
	cout << "□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□□□";
	textColor(0, 0);
	cout << "□";
	textColor(9, 9);
	cout << "□□□□□□□□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□□□";
	textColor(0, 0);
	cout << "□";
	textColor(9, 9);
	cout << "□□□□□□□□□□□";
	textColor(0, 0);
	cout << "□";
	textColor(15, 15);
	cout << "□□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "□□□";
	textColor(0, 0);
	cout << "□□□□□□□□□□□□□";
	textColor(15, 15);
	cout << "□□□";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 0);
	cout << "악세서리\n";
	linePrint();
	cin >> choice;
	return choice;
}

void Shop::textColor(int font, int background)
{
	int color = font + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}