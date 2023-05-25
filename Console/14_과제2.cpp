#include "14_����2.h"
/*
26�ϱ��� -> 3���� �ð�
����2. STL ���� ����

�� ��Ʈ������ ���

- ��ǥ ��Ʈ 1���� (���� + �� + ���� (�Ǽ�����))

- �ʼ� : 
�� ������ ���� �� �Ǹ� ���
�� ������ �������� ������ �����ؾ� �Ѵ�.
�� �������� �ɷ�ġ�� ���� ĳ������ �ɷ�ġ�� ���
�� ������ �̸� ����, �ɷ�ġ, ���� ���� ��� ����

- ������ �����ϸ� ������ �з��� ���´�.
�� 1. ��		2. ����		3. ���� ���

- �� �޴����� �������� ��ȯ�� �����ؾ� �Ѵ�.
*/
#include "14_����2.h"

Shop::Shop()
{
	player = new Player;
	Equimpents resource[9] = { {"����", 3200, 45, "������ ������ 3�� ���� �� ���ظ� ����ϴ� ��ȣ���� �����մϴ�.", WEAPON},
							   {"���󸶳�", 2900, 42, "������ ���� �� �ִ� �������� ����� �߰����ظ� �����ϴ�.", WEAPON},
							   {"�������� ����", 3300, 46, "������ ���� �� ���� �ð� ���� ��ȭ��ŵ�ϴ�.", WEAPON},
							   {"��ȣõ��", 2700, 30, "�����ڰ� ��� �� ���� ü���� ������ ��Ȱ�մϴ�.", ARMOR},
							   {"�¾�Ҳ� ����", 3100, 35, "������ ������ ���� ���� ���� ������ �������ظ� �ݴϴ�.", ARMOR},
							   {"������� ����", 3500, 40, "�����ڰ� ��õ��� ���ظ� ���� ������ ���� �ӵ��� ü���� ȸ���մϴ�.", ARMOR},
							   {"������ �𷡽ð�", 1400, 15, "��� �� ��õ��� ������ �ǰ� ����ڸ� ������� ������ �� �����ϴ�.", ACCESSORY},
							   {"��ö�� �ֶ� �Ҵ�Ʈ", 1200, 10, "��� �� �ڽŰ� �ֺ� ����鿡�� ��ȣ���� �����մϴ�.", ACCESSORY},
							   {"����", 1800, 20, "��� �� ���� ��ġ�� �Ʊ����� ���� ���ִ� ������ �Ͻ������� �����˴ϴ�.", ACCESSORY}};
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
	cout << "��ſ� ���νð�" << endl;
	linePrint();
	cout << "0 : ��� ����\t1 : ��� �Ǹ�\t2 : ��� ����\t�� �� : ��������" << endl;
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
	cout << "������ ����� ������ ������ �ּ���\n";
	cout << "0 : ����, 1 : ��, 2 : �Ǽ�����, �� �� : �ڷΰ���\n";
	linePrint();
	textColor(15, 15);
	cout << "��������������";
	textColor(0, 0);
	cout << "����\n";

	textColor(15, 15);
	cout << "�������������";
	textColor(0, 0);
	cout << "���";
	textColor(4, 4);
	cout << "��";
	textColor(0, 0);
	cout << "��\n";

	textColor(15, 15);
	cout << "������������";
	textColor(0, 0);
	cout << "���";
	textColor(4, 4);
	cout << "��";
	textColor(0, 0);
	cout << "���\n";

	textColor(15, 15);
	cout << "�����������";
	textColor(0, 0);
	cout << "���";
	textColor(4, 4);
	cout << "��";
	textColor(0, 0);
	cout << "���";
	textColor(15, 15);
	cout << "��\n";

	textColor(15, 15);
	cout << "����������";
	textColor(0, 0);
	cout << "���";
	textColor(4, 4);
	cout << "��";
	textColor(0, 0);
	cout << "���";
	textColor(15, 15);
	cout << "���\n";

	textColor(15, 15);
	cout << "���������";
	textColor(0, 0);
	cout << "���";
	textColor(4, 4);
	cout << "��";
	textColor(0, 0);
	cout << "���";
	textColor(15, 15);
	cout << "����\n";

	textColor(15, 15);
	cout << "���";
	textColor(0, 0);
	cout << "���";
	textColor(15, 15);
	cout << "����";
	textColor(0, 0);
	cout << "���";
	textColor(4, 4);
	cout << "��";
	textColor(0, 0);
	cout << "���";
	textColor(15, 15);
	cout << "�����\n";

	textColor(15, 15);
	cout << "��";
	textColor(0, 0);
	cout << "���";
	textColor(8, 8);
	cout << "��";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "��";
	textColor(0, 0);
	cout << "���";
	textColor(4, 4);
	cout << "��";
	textColor(0, 0);
	cout << "���";
	textColor(15, 15);
	cout << "������\n";

	textColor(0, 0);
	cout << "���";
	textColor(8, 8);
	cout << "���";
	textColor(0, 0);
	cout << "����";
	textColor(4, 4);
	cout << "��";
	textColor(0, 0);
	cout << "���";
	textColor(15, 15);
	cout << "�������\n";

	textColor(15, 15);
	cout << "��";
	textColor(0, 0);
	cout << "����";
	textColor(8, 8);
	cout << "��";
	textColor(0, 0);
	cout << "��";
	textColor(4, 4);
	cout << "��";
	textColor(0, 0);
	cout << "���";
	textColor(15, 15);
	cout << "��������\n";

	textColor(15, 15);
	cout << "�����";
	textColor(8, 8);
	cout << "��";
	textColor(0, 0);
	cout << "����";
	textColor(15, 15);
	cout << "���������\n";

	textColor(15, 15);
	cout << "����";
	textColor(0, 0);
	cout << "��";
	textColor(9, 9);
	cout << "��";
	textColor(8, 8);
	cout << "���";
	textColor(0, 0);
	cout << "���";
	textColor(15, 15);
	cout << "��������\n";

	textColor(15, 15);
	cout << "���";
	textColor(0, 0);
	cout << "��";
	textColor(4, 4);
	cout << "��";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "��";
	textColor(0, 0);
	cout << "��";
	textColor(8, 8);
	cout << "���";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "�������\n";

	textColor(0, 0);
	cout << "���";
	textColor(10, 10);
	cout << "��";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "���";
	textColor(0, 0);
	cout << "��";
	textColor(8, 8);
	cout << "��";
	textColor(0, 0);
	cout << "���";
	textColor(15, 15);
	cout << "�������\n";

	textColor(15, 15);
	cout << "��";
	textColor(0, 0);
	cout << "���";
	textColor(15, 15);
	cout << "����";
	textColor(0, 0);
	cout << "����";
	textColor(15, 15);
	cout << "��������\n";

	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "��";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "�����";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "���������\n";
	textColor(15, 0);
	cout << "����\n";
	linePrint();
	linePrint();
	textColor(15, 15);
	cout << "����";
	textColor(0, 0);
	cout << "���";
	textColor(15, 15);
	cout << "�����";
	textColor(0, 0);
	cout << "���";
	textColor(15, 15);
	cout << "����";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "��";
	textColor(0, 0);
	cout << "���";
	textColor(9, 9);
	cout << "���";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "���";
	textColor(0, 0);
	cout << "��";
	textColor(9, 9);
	cout << "���";
	textColor(0, 0);
	cout << "���";
	textColor(15, 15);
	cout << "��";
	textColor(0, 0);
	cout << "\n";

	textColor(0, 0);
	cout << "��";
	textColor(9, 9);
	cout << "�����";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "���";
	textColor(0, 0);
	cout << "��";
	textColor(9, 9);
	cout << "�����";
	textColor(0, 0);
	cout << "��\n";

	textColor(0, 0);
	cout << "��";
	textColor(9, 9);
	cout << "���";
	textColor(15, 15);
	cout << "���";
	textColor(9, 9);
	cout << "��";
	textColor(0, 0);
	cout << "���";
	textColor(9, 9);
	cout << "������";
	textColor(0, 0);
	cout << "��\n";

	textColor(0, 0);
	cout << "��";
	textColor(9, 9);
	cout << "���";
	textColor(15, 15);
	cout << "��";
	textColor(9, 9);
	cout << "�����������";
	textColor(0, 0);
	cout << "��\n";

	textColor(15, 15);
	cout << "��";
	textColor(0, 0);
	cout << "��";
	textColor(9, 9);
	cout << "������������";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "��";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "��";
	textColor(0, 0);
	cout << "��";
	textColor(9, 9);
	cout << "������������";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "��";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "���";
	textColor(0, 0);
	cout << "��";
	textColor(9, 9);
	cout << "����������";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "���";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "���";
	textColor(0, 0);
	cout << "��";
	textColor(9, 9);
	cout << "����������";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "���";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "���";
	textColor(0, 0);
	cout << "��";
	textColor(9, 9);
	cout << "����������";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "���";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "���";
	textColor(0, 0);
	cout << "��";
	textColor(9, 9);
	cout << "����������";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "���";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "����";
	textColor(0, 0);
	cout << "��";
	textColor(9, 9);
	cout << "��������";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "����";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "�����";
	textColor(0, 0);
	cout << "��������";
	textColor(15, 15);
	cout << "�����";
	textColor(15, 0);
	cout << "\n";
	cout << "��\n";
	linePrint();
	linePrint();
	textColor(15, 15);
	cout << "����";
	textColor(0, 0);
	cout << "��������������";
	textColor(15, 15);
	cout << "����";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "����";
	textColor(0, 0);
	cout << "��";
	textColor(9, 9);
	cout << "������������";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "����";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "����";
	textColor(0, 0);
	cout << "��";
	textColor(9, 9);
	cout << "������������";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "����";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "�����";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "����������";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "�����";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "�����";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "����";
	textColor(12, 12);
	cout << "����";
	textColor(15, 15);
	cout << "����";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "�����";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "������";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "��";
	textColor(12, 12);
	cout << "������";
	textColor(15, 15);
	cout << "��";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "������";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "������";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "���";
	textColor(12, 12);
	cout << "����";
	textColor(15, 15);
	cout << "���";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "������";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "�������";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "���";
	textColor(12, 12);
	cout << "��";
	textColor(15, 15);
	cout << "���";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "�������";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "��������";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "��";
	textColor(12, 12);
	cout << "��";
	textColor(15, 15);
	cout << "��";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "��������";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "��������";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "��";
	textColor(12, 12);
	cout << "��";
	textColor(15, 15);
	cout << "��";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "��������";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "��������";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "��";
	textColor(12, 12);
	cout << "��";
	textColor(15, 15);
	cout << "��";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "��������";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "�������";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "���";
	textColor(12, 12);
	cout << "��";
	textColor(15, 15);
	cout << "���";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "�������";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "������";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "���";
	textColor(12, 12);
	cout << "����";
	textColor(15, 15);
	cout << "���";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "������";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "������";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "��";
	textColor(12, 12);
	cout << "������";
	textColor(15, 15);
	cout << "��";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "������";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "�����";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "���";
	textColor(12, 12);
	cout << "������";
	textColor(15, 15);
	cout << "���";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "�����";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "�����";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "��";
	textColor(12, 12);
	cout << "��������";
	textColor(15, 15);
	cout << "��";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "�����";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "����";
	textColor(0, 0);
	cout << "��";
	textColor(9, 9);
	cout << "������������";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "����";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "����";
	textColor(0, 0);
	cout << "��";
	textColor(9, 9);
	cout << "������������";
	textColor(0, 0);
	cout << "��";
	textColor(15, 15);
	cout << "����";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 15);
	cout << "����";
	textColor(0, 0);
	cout << "��������������";
	textColor(15, 15);
	cout << "����";
	textColor(0, 0);
	cout << "\n";

	textColor(15, 0);
	cout << "�Ǽ�����\n";
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
			cout << index << "�� ���" << endl;
			(*sIIterator)->printEquipment();
			linePrint();
			index++;
		}
	}
	linePrint();
	cout << "���� ������ : " << player->getMoney() << endl;
	cout << "������ ����� ��ȣ�� �Է��ϼ���(�� �� : �ڷΰ���) : ";
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