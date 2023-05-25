#pragma once
#include<iostream>
#include<map>
#include<string>
#include<set>
#include<vector>
#include<list>
#include<Windows.h>
// 시간 관련 기능이 있는 헤더파일
// C : time.h / C++ : ctime
#include<ctime>

// - C++11에서 추가됐다.
// ㄴ pair 확장 버전 -> 반환값을 N개 이상 전달할 수 있다.
// ㄴ 많이 사용하는 함수 or 자주 사용하는 기능
// ㄴ EX : make_tuple(튜플 생성) / get(가져오기) / swap(튜플 값을 다른 변수에 전달) / tie(튜플 값 분류)
#include<tuple>

using namespace std;

#pragma region STL 맵
/*
▶ 맵이란?

- 벡터와 마찬가지로 데이터를 관리하는 컬렉션 클래스 중 하나로써 보관되어 있는 데이터를 키/밸류 조합으로 관리하는 클래스를 의미한다.

EX)
std::map<int, int> ValueListA;		-> 키 : int형, 밸류 : int형 -> 맵 선언
std::map<std::string, int> ValueListA;		-> 키 : string형, 밸류 : int형 -> 맵 선언

▷ 맵의 특징

- 두개의 짝을 이루는 데이터 저장 컨테이너 (자료구조)

- 내부 자료구조는 BinarySearchTree -> 레드 블랙 트리로 구성되어 있다.
ㄴ 레드 블랙 트리는 자가 균형 이진 탐색 트리로 검정 / 빨강 노드로 구성되어 있으며 자가 균형 이진이기 때문에 균형 복원 규칙을 따른다.

* 레드 블랙 트리

- 루트 노드는 검은색으로 시작하며 리프 노드 또한 검은색이다.
ㄴ NIL (nullLeaf) : 데이터가 없는 끝점 노드 -> 더미 노드

- 빨간색 노드는 연속으로 나올 수 없고 빨간색 노드의 자식은 검은색이어야 한다.
ㄴ 반대의 경우는 복원 규칙 성립 (EX : 검은색 노드의 자식은 반드시 빨간색일 필요가 없다.)

- 리프 노드에서 루트 노드까지 가는 경로에 있는 검은색 노드의 갯수는 같아야 한다.
ㄴ 새로 삽입되는 노드는 리프 노드가 되며 이 때 이 노드를 중심으로 양쪽 자식에 리프 노드를 연결하는 작업을 한다.

- 레드 블랙 트리는 연산 과정중에 균형 복원을 위해 회전을 한다.(좌 / 우)
ㄴ 우회전시 왼쪽 자식 노드의 오른쪽 자식 노드를 부모 노드의 왼쪽 자식으로 연결
ㄴ 좌회전시 오른쪽 자식 노드의 왼쪽 자식 노드를 부모 노드의 오른쪽 자식으로 연결

- 대량의 검색에 특화된 STL

- 데이터의 빈번한 삽입/삭제 상황에서는 맵은 좋은 선택이 아니다.

- 맵과 유사한 기능을 하는 STL 역시 존재하며 상황에 맞게 어느 컨테이너를 사용할지 고민을 해봐야 한다. + 경험
ㄴ EX: set, multiset, multimap, tuple 등등...

▷ STL 맵의 핵심

- 1. 키와 밸류를 잊지 말자.
ㄴ 첫번째 인자 : first : 키
ㄴ 두번째 인자 : second : 값

- 2. 추가하는 방법은 insert()를 사용하며 키와 밸류, 두개를 동시에 추가해야 하니 pair / make_pair()를 사용해야 한다.

◈ pair
ㄴ 두가지의 자료형을 하나로 묶어주는 구조체
ㄴ 템플릿 구조체이기 때문에 어떤 자료형이 오더라도 OK

◈ make_pair
ㄴ 말 그대로 pair를 만들어 주는 함수
ㄴ EX : p.first = x, p.second = y;		=>		p = make_pair(x, y);
*/
#pragma endregion

class MainGame_06
{
	
private:
	map<string, int> _mData;
	map<string, int>::iterator _miData;
	//multimap<vector<MainGame_06*>, set<vector<float>, list<vector<int>, vector<double>>>> _muData;

	multimap<map<list<MainGame_06*>, set<vector<float>>>, map<list<string>, vector<double>>> _muData;

	multimap<map<vector<MainGame_06*>, set<vector<float>>>, map<list<vector<int>>, vector<double>>> _muData2;

	// set
	set <vector<int>> _svData;
	// tuple
	tuple<int, string, char> _tupleValue;
public:
	std::pair<std::pair<int, int>, std::pair<int, int>> getMinMaxValue(std::vector<int> a_oValueList);
	void printMap(std::map<std::string, int> a_oValueList);

	MainGame_06();
	~MainGame_06();
};

