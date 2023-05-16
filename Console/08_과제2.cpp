/*
과제 2. 구조체를 사용해서 데이터 베이스 비스무리한것 만들어 보기

- 게임 타이틀 명, 평점, 가격, 점수, 특이사항 등등... 필요하면 추가한다.

- 배열을 사용하고 출력까지.

*/
#include "08_과제2.h"

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
			cout << "게임 이름 : " << games[i].title << endl;
			cout << "메타스코어 : " << games[i].score << endl;
			cout << "가격 : " << games[i].price << endl;
			cout << "특이사항 : " << games[i].significant << endl;
			if (games[i].isDiscount)
			{
				cout << "할인가격 : " << games[i].discountPrice << endl;
			}
			cout << endl;
		}
	}
}