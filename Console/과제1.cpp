#include <iostream>
#include <Windows.h>
using namespace std;
/*
����1. ������ �����

- ������ ������, ������ �ٸ� ���� �� �� + �Ǽ���������..
�� 5���� ����� ȭ�鿡 ���

- ��µ� ȭ�鿡�� ������ ������ ���� ���� + Ư���� �Բ� �����ȴ�.

- �ʼ� : ���� 1�� + �� 1�� + �Ǽ����� 1��
�� �÷� ��Ʈ
�� ���� ���� ������ �� �������� �߰��Ѵ�.
*/

namespace weapon {
	namespace weapon1 {
		int damage = 45;
		int price = 3200;
	}

	namespace weapon2 {
		int damage = 42;
		int price = 2900;
	}

	namespace weapon3 {
		int damage = 46;
		int price = 3300;
	}

	namespace weapon4 {
		int damage = 41;
		int price = 2800;
	}

	namespace weapon5 {
		int damage = 43;
		int price = 3000;
	}
}

namespace armor {
	namespace armor1 {
		int price = 2700;
	}

	namespace armor2 {
		int price = 3100;
	}

	namespace armor3 {
		int price = 3500;
	}

	namespace armor4 {
		int price = 3400;
	}

	namespace armor5 {
		int price = 2600;
	}
}

namespace accessory {
	namespace accessory1 {
		int price = 1400;
	}

	namespace accessory2 {
		int price = 1200;
	}

	namespace accessory3 {
		int price = 1800;
	}

	namespace accessory4 {
		int price = 1500;
	}

	namespace accessory5 {
		int price = 2100;
	}
}

void textColor(int font, int background) {
	int color = font + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main() {
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
	cout<< "������������";
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
	cout << "����1�� �̸� : ����\n";
	cout << "����1�� ������ : " << weapon::weapon1::damage << endl;
	cout << "����1�� ���� : " << weapon::weapon1::price << endl;
	cout << "������ ������ 3�� ���� �� ���ظ� ����ϴ� ��ȣ���� �����մϴ�.\n\n";

	cout << "����2�� �̸� : ���󸶳�\n";
	cout << "����2�� ������ : " << weapon::weapon2::damage << endl;
	cout << "����2�� ���� : " << weapon::weapon2::price << endl;
	cout << "������ ���� �� �ִ� �������� ����� �߰����ظ� �����ϴ�.\n\n";

	cout << "����3�� �̸� : �������� ����\n";
	cout << "����3�� ������ : " << weapon::weapon3::damage << endl;
	cout << "����3�� ���� : " << weapon::weapon3::price << endl;
	cout << "������ ���� �� ���� �ð� ���� ��ȭ��ŵ�ϴ�.\n\n";

	cout << "����4�� �̸� : ��칫�� ���ɰ�\n";
	cout << "����4�� ������ : " << weapon::weapon4::damage << endl;
	cout << "����4�� ���� : " << weapon::weapon4::price << endl;
	cout << "��� �� �������� �̵��ӵ��� �����մϴ�.\n\n";

	cout << "����5�� �̸� : ������ â\n";
	cout << "����5�� ������ : " << weapon::weapon5::damage << endl;
	cout << "����5�� ���� : " << weapon::weapon5::price << endl;
	cout << "��ų�� ��Ÿ���� ���ݷ¿� ����� �پ��ϴ�.\n\n";

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
	textColor(0, 0);
	cout << "\n";

	textColor(15, 0);
	cout << "��1�� �̸� : ��ȣõ��\n";
	cout << "��1�� ���� : " << armor::armor1::price << endl;
	cout << "�����ڰ� ��� �� ���� ü���� ������ ��Ȱ�մϴ�.\n\n";

	cout << "��2�� �̸� : �¾�Ҳ� ����\n";
	cout << "��2�� ���� : " << armor::armor2::price << endl;
	cout << "������ ������ ���� ���� ���� ������ �������ظ� �ݴϴ�.\n\n";

	cout << "��3�� �̸� : ������� ����\n";
	cout << "��3�� ���� : " << armor::armor3::price << endl;
	cout << "�����ڰ� ��õ��� ���ظ� ���� ������ ���� �ӵ��� ü���� ȸ���մϴ�.\n\n";

	cout << "��4�� �̸� : ������ ����\n";
	cout << "��4�� ���� : " << armor::armor4::price << endl;
	cout << "�����ڰ� �޴� ����ȿ�� ���� ���� �����մϴ�.\n\n";

	cout << "��5�� �̸� : ��ö����\n";
	cout << "��5�� ���� : " << armor::armor5::price << endl;
	cout << "���� �ð����� �����ڰ� ������ ������ ���� ��ġ�� �ִ� ü������ ��� �ִ�ü�¿� ����� �߰����ظ� �ݴϴ�.\n\n";


	textColor(15, 15);
	cout << "����";
	textColor(0, 0);
	cout << "��������������";
	textColor(15, 15);
	cout << "����";
	textColor(0, 0);
	cout<<"\n";

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
	cout << "�Ǽ�����1�� �̸� : ������ �𷡽ð�\n";
	cout << "�Ǽ�����1�� ���� : " << accessory::accessory2::price << endl;
	cout << "��� �� ��õ��� ������ �ǰ� ����ڸ� ������� ������ �� �����ϴ�.\n\n";
	
	cout << "�Ǽ�����2�� �̸� : ��ö�� �ֶ� �Ҵ�Ʈ\n";
	cout << "�Ǽ�����2�� ���� : " << accessory::accessory1::price << endl;
	cout << "��� �� �ڽŰ� �ֺ� ����鿡�� ��ȣ���� �����մϴ�.\n\n";

	cout << "�Ǽ�����3�� �̸� : ����\n";
	cout << "�Ǽ�����3�� ���� : " << accessory::accessory3::price << endl;
	cout << "��� �� ���� ��ġ�� �Ʊ����� ���� ���ִ� ������ �Ͻ������� �����˴ϴ�.\n\n";

	cout << "�Ǽ�����4�� �̸� : ��ī���� �ູ\n";
	cout << "�Ǽ�����4�� ���� : " << accessory::accessory4::price << endl;
	cout << "�Ʊ����� �ɸ� ��� �طο� ȿ���� �����մϴ�.\n\n";

	cout << "�Ǽ�����5�� �̸� : ��ũ�� ����\n";
	cout << "�Ǽ�����5�� ���� : " << accessory::accessory5::price << endl;
	cout << "���� �̵��Ұ� ���·� ����� �� ����� �Ʊ��� ���� �� �߰����ظ� �ݴϴ�.\n\n";
}