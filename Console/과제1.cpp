#include <iostream>
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

int main() {
	cout << "����1�� ������ : " << weapon::weapon1::damage << endl;
	cout << "����1�� ���� : " << weapon::weapon1::price << endl << endl;
	cout << "����2�� ������ : " << weapon::weapon2::damage << endl;
	cout << "����2�� ���� : " << weapon::weapon2::price << endl << endl;
	cout << "����3�� ������ : " << weapon::weapon3::damage << endl;
	cout << "����3�� ���� : " << weapon::weapon3::price << endl << endl;
	cout << "����4�� ������ : " << weapon::weapon4::damage << endl;
	cout << "����4�� ���� : " << weapon::weapon4::price << endl << endl;
	cout << "����5�� ������ : " << weapon::weapon5::damage << endl;
	cout << "����5�� ���� : " << weapon::weapon5::price << endl << endl;

	cout << "��1�� ���� : " << armor::armor1::price << endl << endl;
	cout << "��2�� ���� : " << armor::armor2::price << endl << endl;
	cout << "��3�� ���� : " << armor::armor3::price << endl << endl;
	cout << "��4�� ���� : " << armor::armor4::price << endl << endl;
	cout << "��5�� ���� : " << armor::armor5::price << endl << endl;

	cout << "�Ǽ�����1�� ���� : " << accessory::accessory1::price << endl << endl;
	cout << "�Ǽ�����2�� ���� : " << accessory::accessory2::price << endl << endl;
	cout << "�Ǽ�����3�� ���� : " << accessory::accessory3::price << endl << endl;
	cout << "�Ǽ�����4�� ���� : " << accessory::accessory4::price << endl << endl;
	cout << "�Ǽ�����5�� ���� : " << accessory::accessory5::price << endl << endl;
}