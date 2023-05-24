#include "MainGame_05.h"


MainGame_05::MainGame_05()
{
	/*
	* STL 벡터에서 자주 사용하는 기능
	- push_back()
	ㄴ 데이터를 뒤에서부터 추가한다.(값)

	- emplace_back()
	ㄴ 데이터를 뒤에서부터 추가한다.(값)

	- pop_back()
	ㄴ 데이터 뒤에서부타 값을 삭제

	- size()
	ㄴ 벡터의 크기(갯수)

	- resize()
	ㄴ 크기 재연산

	- clear()
	ㄴ 인덱스 전부 삭제, 반복자를 통해 할 경우 메모리까지 삭제

	- begin()
	ㄴ 벡터의 0번째 인덱스

	- end()
	ㄴ 벡터의 마지막 인덱스

	- insert(위치, 값)
	ㄴ 삽입
	
	- insert(위치, 개수, 값)
	ㄴ 삽입

	- erase(위치)
	ㄴ 삭제
	*/

	_vNumber.push_back(1);
	_vNumber.push_back(2);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;

	LinePrint();

	_vNumber.pop_back();
	_vNumber.pop_back();

	int num[2];
	num[0] = 1;
	num[1] = 2;

	cout << num[0] << endl;
	cout << num[1] << endl;

	LinePrint();

	// 안전도 : 중
	for (int i = 0; i < 10; i++)
	{
		// 
		_vNumber.push_back(i + 1);
		cout << _vNumber[i] << endl;
	}

	LinePrint();

	_vNumber.push_back(1);

	_vNumber.pop_back();

	_vNumber.clear();

	//_vNumber.insert(_vNumber.begin() + 5, 100);

	_vNumber.push_back(1);
	_vNumber.push_back(2);

	_vNumber.insert(_vNumber.begin() + 1, 100);

	// 안정도 : 상
	// ㄴ 직접 참조를 통한 출력
	for (int i = 0; i < _vNumber.size(); i++)
	{
		cout << _vNumber[i] << endl;
	}

	LinePrint();
	
	// 안전도 최상
	// ㄴ 반복자를 통한 순회

	for (_viNumber = _vNumber.begin(); _viNumber != _vNumber.end(); ++_viNumber)
	{
		cout << *_viNumber << endl;
	}
	LinePrint();
}

MainGame_05::~MainGame_05()
{

}

void MainGame_05::printVector()
{
	LinePrint();
	LinePrint();
	LinePrint();

	cout << "push.back()" << endl;

	_vNumber.push_back(1);
	_vNumber.push_back(2);
	_vNumber.push_back(3);
	_vNumber.push_back(4);
	_vNumber.push_back(5);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;
	cout << _vNumber[2] << endl;
	cout << _vNumber[3] << endl;
	cout << _vNumber[4] << endl;

	LinePrint();

	cout << "insert()" << endl;
	_vNumber.insert(_vNumber.begin() + 2, 10);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;
	cout << _vNumber[2] << endl;
	cout << _vNumber[3] << endl;
	cout << _vNumber[4] << endl;

	LinePrint();

	cout << "pop_back" << endl;
	// 선행 : 조건을 체크 / 반복문 내부에서 지우는 습관을 들여야 한다.
	_vNumber.pop_back();

	for (int i = 0; i < _vNumber.size(); i++)
	{
		cout << _vNumber[i] << endl;
	}

	/*
	- 주어진 범위의 모든 데이터를 하나씩 순회하며 동작하는 경우에 사용한다.
	ㄴ for each는 컨테이너의 반복자 개념

	- for each는 vector의 컨테이너 요소가 아니고 알고리즘 함수

	- 모든 컨테이너는 반복자를 가지고 있으며 for each를 사용해서 컨테이너의 원소 접근이 가능하다.

	- 이게 가능한 이유는 for each문 역시 이터레이터와 동일하게 스마트 포인터이며 컨테이너를 순회하면서 원하는 요소에 접근이 가능하다.

	◈ auto

	- 컴파일러가 컴파일시 자동으로 자료형을 추론한다.

	- 컴파일러가 자료형을 추론하기 위해서는 명시적인 조건이 주어져야 한다.

	C# -> var

	- C/C++ 언어는 기본적으로 변수를 선언할 때 해당 변수의 자료형을 명시해야 한다.

	- auto 키워드 자체가 C#의 var와 유사하며 자료형이 확정되는 시기는 컴파일 타임

	- auto 키워드에 대한 자료형이 결정되는 시점은 변수에 할당되는 초기값을 가지고 판단하기 때문에 auto를 통한 변수 선언은 특정값을 할당해야 한다.
	*/

	// 연산이 별도로 필요없는 로직에서만 제한적으로 사용한다.
	for each (auto p in _vNumber)
	{
		cout << "for each문" << p << endl;
	}

	cout << "erase()" << endl;

	// 단일
	// erase(_vNumber.begin() + index);
	// 범위
	// erase(_vNumber.begin() + s, _vNumber.being + e);

	_vNumber.erase(_vNumber.begin() + 1);
	// 스타트 ->엔드
	_vNumber.erase(_vNumber.begin() + 1, _vNumber.begin() + 3);

	LinePrint();

	// 역순회
	for (_vriNumber = _vNumber.rbegin(); _vriNumber != _vNumber.rend(); ++_vriNumber)
	{
		cout << *_vriNumber << endl;
	}

	LinePrint();

	/*
	면접 문제
	ㄴ 차이점?
	at : 임의 위치의 원소를 참조하는 인터페이스
	at == [] 동일한 결과물을 보여준다.

	[]: 범위 점검을 하지 않기 때문에 속도면에서 유리하다.
	at(): 범위 점검을 하기 때문에 속도는 느리다. 단, 안정성면에서는 훨씬 유리하다.
	 */
	cout << "at()" << endl;

	cout << _vNumber.at(4) << endl;
	cout << _vNumber[4] << endl;

	LinePrint();

	// 첫번째 요소 참조
	// 방이 전부 안착이 되어 있는지 확인이 가능하고
	cout << "front" << endl;
	cout << _vNumber.front() << endl;

	LinePrint();

	// 마지막 원소 참조
	// 인덱스가 전부 안착이 되어있는지 확인한다.
	cout << "back" << endl;
	cout << _vNumber.back() << endl;

	LinePrint();

	// 현재 벡터의 사이즈를 확인한다.
	cout << "size" << endl;
	cout << _vNumber.size() << endl;

	_vNumber.clear();

	LinePrint();


	// empty() : 비어 있으면 t / 하나 이상 있는 경우 f
	if (_vNumber.empty())
	{
		cout << "텅텅 비었다." << endl << endl;

		// 비어 있다면 내부 로직을 실행할 필요가 없다.
		return;
	}

	cout << _vNumber.at(2) << endl;
}

void MainGame_05::sampleVector(std::vector<int> valueList)
{
}

void MainGame_05::sampleSTVector(std::vector<STData> ValueList)
{
}

void MainGame_05::practiceVector(void)
{
}