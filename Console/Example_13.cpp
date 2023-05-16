#include"Example_13.h"

#define EXAMPLE_TYPE_STRUCT				1
#define EXAMPLE_TYPE_ENUM				2
#define EXAMPLE_TYPE_UNION				3
#define EXAMPLE_TYPE_CLASS				4

#define EXAMPLE_TYPE					EXAMPLE_TYPE_UNION

// 사용자 정의 자료형부터는 접근범위(지역, 전역, 정적지역, 정적전역)에 대해서 신경을 많이 써야 한다.


namespace EXAMPLE_3
{
	struct tagFamily
	{
		char* name;		// 이름
		int age;		// 나이
		int height;		// 키
		float weight;	// 무게
		bool wedding;	// 결혼 유무?
	};
	struct tagPlayer
	{
		int hp;
		int mp;
		int att;
		int def;
		float speed;
	};
	struct tagUnit
	{
		string name;
		int hp;
		float att;
		bool die;
	};

	// ============================================

	/*
	- 열거형 상수는 기본적으로 특정 값을 할당하지 않으면 컴파일러에 의해서 자동으로 값을 할당한다. (0부터 -> 순서대로 값을 부여 한다.)

	- 단, 특정 상수에 값을 할당했을 경우 해당 상수밑으로는 차례대로 해당 상수에 할당된 값에서 +1씩 증가해서 할당이 이뤄진다.
	*/

	enum EColor_Type
	{
		// 열거형 상수는 기본적으로 전부 대문자 표기를 한다.
		RED,
		GREEN,
		BLUE = 1000,
		BLACK,
		WHITE
	};
	
	enum EMotion_Type
	{
		R_WALK,
		L_WALK,
		R_RUN,
		L_RUN
	};

	// class가 붙어 별도의 공간을 갖는다. 데이터 크기를 명시해줘서 데이터 낭비와 모호함 해결
	enum class Motion_Type : uint16_t
	{
		R_WALK,
		L_WALK,
		R_RUN,
		L_RUN
	};

	/*
	추가된 기능으로 열거형에는 반드시 이름을 명시할 필요가 없어졌다.
	ㄴ 익명의 개념

	해당 방식으로 선언된 열거형은 식별할 수 있는 이름이 당연히 존재하지 않기 때문에 따로 변수화 시키는건 불가능하다.

	이러한 규칙은 개정이 되면서 다른 사용자 정의 자료형에도 적용된다.
	*/

	// #define과 차이점 #define은 전처리기가 아래는 컴파일이 메모리 할당하기 때문에 컴파일 시간 증가
	enum
	{
		UINT_SIZE = 5
	};

	union STData
	{
		int m_nDataA;
		int m_nDataB;
		float m_fData;
	};

	// 구조체의 위치 메모리 사용량 많으나 실행속도 빠름
	void Example()
	{
		// 구조체의 위치 메모리 사용량 적으나 실행속도 느림
#if EXAMPLE_TYPE == EXAMPLE_TYPE_STRUCT
		// 0. 설계 + 추상화
		// 1. 선언
		// 2. 구현화 부분
		// 3. 실제 사용되는 부분

		// C 언어 방법
		// struct tagFamily Family;
		// C++
		tagFamily human;
		/*
		- 일단은 사용하기 위해서는 정의가 필요하고 구조체 멤버 변수에 접근하기 위해서는 . 연산자를 사용한다.

		- 그 외에는 일반적인 변수와 동일시되기 때문에 사용을 위해서 초기화가 필요하다.

		- 또 다른 특징이 있다면 구조체의 초기화는 배열의 초기화와 같이 지정된 값이 순서대로 들어간다는 특징이 있다.
		*/
		human.name = "사라";
		human.age = 18;
		human.height = 230;
		cout << boolalpha;
		human.wedding = false;
		human.weight = 45;

		cout << "이름 : " << human.name << "\n"
			<< "나이 : " << human.age << "\n"
			<< "키 : " << human.height << "\n"
			<< "결혼 : " << human.wedding << "\n"
			<< "몸무게 : " << human.weight << endl;

		cout << '\n';

		// 체력 : 100, 마나 : 50, 공격력 : 10, 방어력 : 5, 이동력 : 10.5;

		tagPlayer player;
		player.hp = 100;
		player.mp = 50;
		player.att = 10;
		player.def = 5;
		player.speed = 10.5f;

		cout << "체력 : " << player.hp << "\n"
			<< "마나 : " << player.mp << "\n"
			<< "공격력 : " << player.att << "\n"
			<< "방어력 : " << player.def << "\n"
			<< "이동력 : " << player.speed << endl;


		// tagUnit marin;
		// 구조체 선언과 동시에 초기화
		tagUnit zergling = { "저글링", 50, 5.5f, true };

		cout << "이름 : " << zergling.name << endl;
		cout << "체력 : " << zergling.hp << endl;
		cout << "공격력 : " << zergling.att << endl;
		cout << "사망여부 : " << zergling.die << endl;

		cout << sizeof(char*) << endl;

		cout << "\n";

		// 로드그래머 케이스
		tagPlayer arrPlayer[4] =
		{
			{100, 100, 100, 100, 100 },
			{90, 90, 90, 90, 90 },
			{80, 80, 80, 80, 80 },
			{7, 7, 7, 7, 7 },
		};

		for (int i = 0; i < 4; i++)
		{
			cout << i + 1 << "번째 플레이어" << endl;
			cout << "HP : " << arrPlayer[i].hp << endl;
			cout << "====================================" << endl;
		}

#elif EXAMPLE_TYPE == EXAMPLE_TYPE_ENUM

		// 1001
		// 포폴에 있으면 절대 안되는 코드중에 하나
		// 아주 위험한 코드 -> 모호함
		cout << "블랙 : " << BLACK << endl;

		cout << "블랙 : " << EColor_Type::BLACK << endl;

		EMotion_Type m_motion;

		m_motion = L_WALK;

		// 대부분의 게임에서 방향잡을 때 필수로 사용이 된다.
		// Why -> 편리해서 + 유지보수 용이함
		switch (m_motion)
		{
		case R_WALK:
			cout << "오른쪽 걷기" << endl;
			break;
		case L_WALK:
			cout << "왼쪽 걷기" << endl;
			break;
		case R_RUN:
			cout << "오른쪽 뛰기" << endl;
			break;
		case L_RUN:
			cout << "왼쪽 뛰기" << endl;
			break;
		}

		if (m_motion == L_WALK)
		{
			m_motion = R_RUN;

			if (m_motion == R_RUN)
			{
				cout << "오른쪽으로 신나게 뛰어간다." << endl;
			}
		}

#elif EXAMPLE_TYPE == EXAMPLE_TYPE_UNION
	
		STData stData;

		stData.m_nDataA = 0;
		stData.m_nDataB = 200;
		stData.m_fData = 3.14f;

		cout << "== 공용체 == " << endl;
		cout << "정수 데이터 : " << stData.m_nDataA << endl;
		cout << "정수 데이터 : " << stData.m_nDataB << endl;
		cout << "실수 데이터 :  " << stData.m_fData << endl;

#elif EXAMPLE_TYPE == EXAMPLE_TYPE_CLASS

#endif
	}

}