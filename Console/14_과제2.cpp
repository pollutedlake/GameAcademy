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
	for (int i = 0; i < TypeNum; i++)
	{
		equipmentN[i] = 0;
	}
	for (int i = 0; i < sizeof(resource) / sizeof(resource[0]); i++)
	{
		int at = 0;
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
		for (int j = 0; j < resource[i].type + 1; j++)
		{
			at += equipmentN[j];
		}
		equipmentN[resource[i].type]++;
		saleItem.insert(saleItem.begin() + at, equipment);
	}
}

Shop::~Shop()
{
	delete player;
	delete equipment;
	delete equipmentN;
	saleItem.clear();
}

void Shop::startShopping()
{
	
	while (true)
	{
		switch (printDoWhat())
		{
			int type;
		case 0:
			while(true)
			{
				type = printEquipmentType();
				if (type >= 0 && type <= 2)
				{
					if (purchaseEquipment(type))
					{
						continue;
					}
				}
				else
				{
					break;
				}
			}
			break;
		case 1:
			sellEquipment();
			break;
		case 2:
			wearEquipment();
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
	cout << "�Ͻ� �ൿ�� �Է����ּ��� : ";
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

bool Shop::purchaseEquipment(int type)
{
	while(true)
	{
		system("cls");
		linePrint();
		linePrint();
		int index = 0;
		auto start = saleItem.begin();
		auto end = saleItem.begin();
		switch (type)
		{
		case WEAPON:
			end += equipmentN[WEAPON];
			break;
		case ARMOR:
			start += equipmentN[WEAPON];
			end = saleItem.end() - equipmentN[ACCESSORY];
			break;
		case ACCESSORY:
			start = saleItem.end() - equipmentN[ACCESSORY];
			end = saleItem.end();
			break;
		}
		for (auto sIIterator = start; sIIterator != end; ++sIIterator)
		{
			if ((*sIIterator)->getType() == type)
			{
				++index;
				cout << index << "�� ���" << endl;
				(*sIIterator)->printEquipment();
				linePrint();
			}
		}
		linePrint();
		cout << "���� ������ : " << player->getMoney() << endl;
		cout << "������ ����� ��ȣ�� �Է��ϼ���(�� �� : �ڷΰ���) : ";
		int choice;
		cin >> choice;
		if (choice > 0 && index >= choice)
		{
			if (player->getMoney() < (*(start + choice - 1))->getPrice())
			{
				cout << "���� �������� �����մϴ�.\n";
				Sleep(3000);
				continue;
			}
			else
			{
				player->putInventory(*(start + choice - 1));
				player->setMoney(player->getMoney() - (*(start + choice - 1))->getPrice());
				saleItem.erase(start + choice - 1);
				equipmentN[type]--;
			}
		}
		else
		{
			return true;
		}
	}
}

void Shop::sellEquipment()
{
	while(true)
	{
		system("cls");
		linePrint();
		player->printInventory();
		linePrint();
		cout << "���� ������ : " << player->getMoney() << endl;
		cout << "�Ǹ��� ����� ��ȣ�� �Է��ϼ���(�� �� : �ڷΰ���) : ";
		int choice;
		cin >> choice;
		if (choice > 0 && choice <= player->getInventorySize())
		{
			Equipment* tempE = player->getEquipment(choice - 1); 
			player->setMoney(player->getMoney() + tempE->getPrice());
			int index = 0;
			for (int i = 0; i < tempE->getType() + 1; i++)
			{
				index += equipmentN[i];
			}
			saleItem.insert(saleItem.begin() + index, tempE);
			equipmentN[tempE->getType()]++;
			player->takeOutEquipment(choice - 1);
		}
		else {
			return;
		}
	}
}

void Shop::wearEquipment()
{
	while(true)
	{
		system("cls");
		linePrint();
		player->printStatus();
		linePrint();
		player->printInventory();
		linePrint();
		cout << "������ ����� ��ȣ�� �Է��ϼ���(�� �� : �ڷΰ���) : ";
		int choice;
		cin >> choice;
		if (choice > 0 && choice <= player->getInventorySize())
		{
			player->wearEquipment(choice - 1);
		}
		else
		{
			return;
		}
	}

}

void Shop::textColor(int font, int background)
{
	int color = font + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}