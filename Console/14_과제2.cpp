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
	Equimpents resource[9] = { {"월식", 3200, 45, "동일한 적에게 3번 공격 시 피해를 흡수하는 보호막을 형성합니다.", WEAPON},
							   {"무라마나", 2900, 42, "적에게 공격 시 최대 마나량에 비례한 추가피해를 입힙니다.", WEAPON},
							   {"세릴다의 원한", 3300, 46, "적에게 공격 시 일정 시간 동안 둔화시킵니다.", WEAPON},
							   {"수호천사", 2700, 30, "착용자가 사망 시 일정 체력을 가지고 부활합니다.", ARMOR},
							   {"태양불꽃 방패", 3100, 35, "착용자 주위의 일정 범위 내의 적에게 지속피해를 줍니다.", ARMOR},
							   {"워모그의 갑옷", 3500, 40, "착용자가 잠시동안 피해를 받지 않으면 일정 속도로 체력을 회복합니다.", ARMOR},
							   {"존야의 모래시계", 1400, 15, "사용 시 잠시동안 무적이 되고 사용자를 대상으로 지정할 수 없습니다.", ACCESSORY},
							   {"강철의 솔라리 팬던트", 1200, 10, "사용 시 자신과 주변 동료들에게 보호막을 생성합니다.", ACCESSORY},
							   {"구원", 1800, 20, "사용 시 지정 위치에 아군에게 힐을 해주는 장판이 일시적으로 생성됩니다.", ACCESSORY}};
	for (int i = 0; i < sizeof(resource) / sizeof(resource[0]); i++)
	{
		switch (resource[i].type)
		{
		case WEAPON:
			equipment = new Weapon(resource[i].name, resource[i].price, resource[i].stats, resource[i].explanation, resource[i].type);
			break;
		case ARMOR:
			equipment = new Armor(resource[i].name, resource[i].price, resource[i].stats, resource[i].explanation, resource[i].type);
			break;
		case ACCESSORY:
			equipment = new Accessory(resource[i].name, resource[i].price, resource[i].stats, resource[i].explanation, resource[i].type);
			break;
		}
		saleItem.push_back(equipment);
	}
}

Shop::~Shop()
{
	delete player;
	delete equipment;
}

void Shop::startShopping()
{
	
	while (true)
	{
		switch (printDoWhat())
		{
			int type;
		case 0:
			type = printEquipmentType();
			if (type >= 0 && type <= 2)
			{
				purchaseEquipment(type);
			}
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

void Shop::purchaseEquipment(int type)
{
	system("cls");
	linePrint();
	linePrint();
	int index = 1;
	for (auto sIIterator = saleItem.begin(); sIIterator != saleItem.end(); ++sIIterator)
	{
		if ((*sIIterator)->getType() == type)
		{
			cout << index << "번 장비" << endl;
			(*sIIterator)->printEquipment();
			linePrint();
			index++;
		}
	}
	linePrint();
	cout << "현재 소지금 : " << player->getMoney() << endl;
	cout << "구매할 장비의 번호를 입력하세요(그 외 : 뒤로가기) : ";
	int choice;
	cin >> choice;
	if (choice > 0 && index >= choice)
	{
		int count = 0;
		for (auto sIIterator = saleItem.begin(); sIIterator != saleItem.end(); ++sIIterator)
		{
			if ((*sIIterator)->getType() == type)
			{
				if (++count == choice)
				{
					player->putInventory((*sIIterator));
					if (player->setMoney(player->getMoney() < (*sIIterator)->getPrice()))
					{

					}
					player->setMoney(player->getMoney() - (*sIIterator)->getPrice());
				}
			}
		}
	}
	else
	{
		return;
	}
}

void Shop::textColor(int font, int background)
{
	int color = font + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}