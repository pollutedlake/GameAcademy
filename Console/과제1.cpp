#include <iostream>
#include <Windows.h>
using namespace std;
/*
과제1. 아이템 만들기

- 종류와 데미지, 가격이 다른 무기 및 방어구 + 악세서리까지..
ㄴ 5종씩 만들고 화면에 출력

- 출력된 화면에는 아이템 종류에 따른 가격 + 특성이 함꼐 나열된다.

- 필수 : 무기 1종 + 방어구 1종 + 악세서리 1종
ㄴ 컬러 도트
ㄴ 차후 너희 포폴에 들어갈 컨셉으로 추가한다.
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
	cout<< "□□□□□□□□□□□";
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
	cout << "무기1의 이름 : 월식\n";
	cout << "무기1의 데미지 : " << weapon::weapon1::damage << endl;
	cout << "무기1의 가격 : " << weapon::weapon1::price << endl;
	cout << "동일한 적에게 3번 공격 시 피해를 흡수하는 보호막을 생성합니다.\n\n";

	cout << "무기2의 이름 : 무라마나\n";
	cout << "무기2의 데미지 : " << weapon::weapon2::damage << endl;
	cout << "무기2의 가격 : " << weapon::weapon2::price << endl;
	cout << "적에게 공격 시 최대 마나량에 비례한 추가피해를 입힙니다.\n\n";

	cout << "무기3의 이름 : 세릴다의 원한\n";
	cout << "무기3의 데미지 : " << weapon::weapon3::damage << endl;
	cout << "무기3의 가격 : " << weapon::weapon3::price << endl;
	cout << "적에게 공격 시 일정 시간 동안 둔화시킵니다.\n\n";

	cout << "무기4의 이름 : 요우무의 유령검\n";
	cout << "무기4의 데미지 : " << weapon::weapon4::damage << endl;
	cout << "무기4의 가격 : " << weapon::weapon4::price << endl;
	cout << "사용 시 착용자의 이동속도가 증가합니다.\n\n";

	cout << "무기5의 이름 : 쇼진의 창\n";
	cout << "무기5의 데미지 : " << weapon::weapon5::damage << endl;
	cout << "무기5의 가격 : " << weapon::weapon5::price << endl;
	cout << "스킬의 쿨타임이 공격력에 비례해 줄어듭니다.\n\n";

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
	textColor(0, 0);
	cout << "\n";

	textColor(15, 0);
	cout << "방어구1의 이름 : 수호천사\n";
	cout << "방어구1의 가격 : " << armor::armor1::price << endl;
	cout << "착용자가 사망 시 일정 체력을 가지고 부활합니다.\n\n";

	cout << "방어구2의 이름 : 태양불꽃 방패\n";
	cout << "방어구2의 가격 : " << armor::armor2::price << endl;
	cout << "착용자 주위의 일정 범위 내의 적에게 지속피해를 줍니다.\n\n";

	cout << "방어구3의 이름 : 워모그의 갑옷\n";
	cout << "방어구3의 가격 : " << armor::armor3::price << endl;
	cout << "착용자가 잠시동안 피해를 받지 않으면 일정 속도로 체력을 회복합니다.\n\n";

	cout << "방어구4의 이름 : 정령의 형상\n";
	cout << "방어구4의 가격 : " << armor::armor4::price << endl;
	cout << "착용자가 받는 흡혈효과 힐의 양이 증가합니다.\n\n";

	cout << "방어구5의 이름 : 강철심장\n";
	cout << "방어구5의 가격 : " << armor::armor5::price << endl;
	cout << "일정 시간마다 착용자가 입히는 피해의 일정 수치를 최대 체력으로 얻고 최대체력에 비례해 추가피해를 줍니다.\n\n";


	textColor(15, 15);
	cout << "□□□";
	textColor(0, 0);
	cout << "□□□□□□□□□□□□□";
	textColor(15, 15);
	cout << "□□□";
	textColor(0, 0);
	cout<<"\n";

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
	cout << "악세서리1의 이름 : 존야의 모래시계\n";
	cout << "악세서리1의 가격 : " << accessory::accessory2::price << endl;
	cout << "사용 시 잠시동안 무적이 되고 사용자를 대상으로 지정할 수 없습니다.\n\n";
	
	cout << "악세서리2의 이름 : 강철의 솔라리 팬던트\n";
	cout << "악세서리2의 가격 : " << accessory::accessory1::price << endl;
	cout << "사용 시 자신과 주변 동료들에게 보호막을 생성합니다.\n\n";

	cout << "악세서리3의 이름 : 구원\n";
	cout << "악세서리3의 가격 : " << accessory::accessory3::price << endl;
	cout << "사용 시 지정 위치에 아군에게 힐을 해주는 장판이 일시적으로 생성됩니다.\n\n";

	cout << "악세서리4의 이름 : 미카엘의 축복\n";
	cout << "악세서리4의 가격 : " << accessory::accessory4::price << endl;
	cout << "아군에게 걸린 모든 해로운 효과를 제거합니다.\n\n";

	cout << "악세서리5의 이름 : 지크의 융합\n";
	cout << "악세서리5의 가격 : " << accessory::accessory5::price << endl;
	cout << "적을 이동불가 상태로 만들면 그 대상을 아군이 공격 시 추가피해를 줍니다.\n\n";
}