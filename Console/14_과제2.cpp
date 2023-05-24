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

void Shop::textColor(int font, int background)
{
	int color = font + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}