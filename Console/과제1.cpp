#include <iostream>
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

int main() {
	cout << "무기1의 데미지 : " << weapon::weapon1::damage << endl;
	cout << "무기1의 가격 : " << weapon::weapon1::price << endl << endl;
	cout << "무기2의 데미지 : " << weapon::weapon2::damage << endl;
	cout << "무기2의 가격 : " << weapon::weapon2::price << endl << endl;
	cout << "무기3의 데미지 : " << weapon::weapon3::damage << endl;
	cout << "무기3의 가격 : " << weapon::weapon3::price << endl << endl;
	cout << "무기4의 데미지 : " << weapon::weapon4::damage << endl;
	cout << "무기4의 가격 : " << weapon::weapon4::price << endl << endl;
	cout << "무기5의 데미지 : " << weapon::weapon5::damage << endl;
	cout << "무기5의 가격 : " << weapon::weapon5::price << endl << endl;

	cout << "방어구1의 가격 : " << armor::armor1::price << endl << endl;
	cout << "방어구2의 가격 : " << armor::armor2::price << endl << endl;
	cout << "방어구3의 가격 : " << armor::armor3::price << endl << endl;
	cout << "방어구4의 가격 : " << armor::armor4::price << endl << endl;
	cout << "방어구5의 가격 : " << armor::armor5::price << endl << endl;

	cout << "악세서리1의 가격 : " << accessory::accessory1::price << endl << endl;
	cout << "악세서리2의 가격 : " << accessory::accessory2::price << endl << endl;
	cout << "악세서리3의 가격 : " << accessory::accessory3::price << endl << endl;
	cout << "악세서리4의 가격 : " << accessory::accessory4::price << endl << endl;
	cout << "악세서리5의 가격 : " << accessory::accessory5::price << endl << endl;
}