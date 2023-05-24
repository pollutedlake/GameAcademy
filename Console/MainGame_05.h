#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>

using namespace std;

// 14. STL 벡터 + 이터레이터

#pragma region STL 벡터 + 이터레이터
/*
▶ 벡터란?

-STL(Standard Template Library)에 속해 있는 컬렉션 클래스 중 하나로서 배열처럼 동작하는 컬렉션 클래스를 의미한다.

- 즉 일반적인 배열에 비해 데이터를 추가하기 위한 갯수가 제한되어 있지 않기 때문에 컴퓨터가 허락하는 한 많은 양의 데이터를 추가하는 것이 가능하다.

EX)

vector<템플릿 인수> 객체 이름(생성자 인수);

std::vector<int> ValueListA		->		int형 데이터를 보관하고 있는 벡터
std::vector<flaot> ValueListB	->		float형 데이터를 보관하고 있는 벡터

- STL 벡터는 시퀀스 기반이다.
ㄴ 별다른 규칙이나 제약이 없는 일반적인 컨테이너라고 부를 수 있다.

- 또한 시퀀스 컨테이너는 데이터를 선형으로 저장하며 시퀀스 컨테이너는 삽입된 요소의 순서가 그대로 유지된다.

▷ 시퀀스 컨테이너

- 기본 컨테이너 규칙에 아래 규칙을 만족한다면 시퀀스 컨테이너라고 부른다.
ㄴ대표적으로 vector, list, deque 등이 있다.

* 규칙

1. 모든 요소는 직선 순서대로 배치되어야 한다.
ㄴ 첫번째 요소와 마지막 요소를 제외한 나머지 요소들은 반드시 앞뒤로 인접한 요소를 하나씩 가지고 있어야 한다.

2. 최소한 순방향 반복자를 가지고 있어야 한다. (forward iterator)
ㄴ 이는 반복자가 이동할때마다 요소들의 순서가 변하지 않음을 보장해 주기 위함이다.

3. 시퀀스 컨테이너의 요소들은 명확한 순서를 가진다.
ㄴ 명확한 순서를 가지기 때문에 특정 위치를 참조하는 연산이 가능하다.

▶ 벡터의 특징

- 시퀀스 기반 + 배열 기반 컨테이너

- C++ 언어에서 활용 빈도가 가장 높고 사용하기가 비교적 쉽다.

- 읽기 능력이 탁월하다는 뜻

- 반면에 입출력은 느리다.

- 새로운 메모리를 할당해 새로 추가한 원소와 함께 "복사"한다.

- 메모리 소모량이 크다.

- Back Iterator와 Forward Iterator를 둘 다 지원한다.

▶ 이터레이터란?

- 컬렉션 클래스에 보관되어 있는 각 데이터에 접근하기 위한 포인터 객체로써 STL에 포함되어 있는 모든 컬렉션 클래스는 데이터의 시작과 끝을 나타내는 begin과 end 함수를 지니고 있다.

- begin과 end 함수를 지니고 있기 때문에 루프를 반복해서 컬렉션에 포함되어 있는 모든 데이터에 접근하는 것이 가능하다.

EX)

for (auto Iterator = ValueListA.begin(); Iterator != ValueListA.end(); ++Iterator)
{
	! Do Somethig
}
*/
#pragma endregion

struct STData
{
	int m_nValue;
	std::string m_oString;
};

class MainGame_05
{
private:
	// 정수형 벡터 선언
	vector<int> _vNumber;
	// 정수형 벡터의 반복자 선언
	vector<int>::iterator _viNumber;
	vector<int>::reverse_iterator _vriNumber;

public:
	void printVector();
	// 인라인 함수 실행속도 향상
	// 함수는 스택에서 관리하지만 인라인 함수는 스택에서 관리하지 않음
	// 함수의 정의와 선언 구분하지 않음 Getter와 Setter처럼
	inline void LinePrint() { cout << "=====================================" << endl; }


	void sampleVector(std::vector<int> valueList);
	void sampleSTVector(std::vector<STData> ValueList);
	void practiceVector(void);

	MainGame_05();
	~MainGame_05();
};

