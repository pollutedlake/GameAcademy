/*
���� 2. ����ü�� ����ؼ� ������ ���̽� �񽺹����Ѱ� ����� ����

- ���� Ÿ��Ʋ ��, ����, ����, ����, Ư�̻��� ���... �ʿ��ϸ� �߰��Ѵ�.

- �迭�� ����ϰ� ��±���.

*/
#include "08_����2.h"

struct game
{
	char* title;
	float score;
	int price;
	char* significant;
	bool isDiscount;
	int discountPrice;
};

namespace ASSIGNMENT_2
{
	void dataBase()
	{
		game games[5] = { {"A Way Out", 78, 33000, "2players multi", true, 6600},
						  {"The Legend of Zelda: Tears of the Kingdom", 96, 74800, "switch game", false},
						  {"It Takes Two", 89, 44000, "2players multi", true, 22000},
						  {"Crusader Kings 3", 91, 52000, "Strategy, Simulation", true, 26000},
						  {"Dead Space", 87, 66000, "Horror, Third-Person Shooter", false}};

		for (int i = 0; i < sizeof(games) / sizeof(games[0]); i++)
		{
			cout << "���� �̸� : " << games[i].title << endl;
			cout << "��Ÿ���ھ� : " << games[i].score << endl;
			cout << "���� : " << games[i].price << endl;
			cout << "Ư�̻��� : " << games[i].significant << endl;
			if (games[i].isDiscount)
			{
				cout << "���ΰ��� : " << games[i].discountPrice << endl;
			}
			cout << endl;
		}
	}
}