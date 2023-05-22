#pragma once
#include <iostream>

using namespace std;

#pragma region 상속
/*
▶ 객체지향 프로그래밍의 4대 요소(특징)

- 상속
- 디형성
- 캡슐화
- 추상화

▶ 상속이란?

- 기존 클래스가 지니고 있는 멤버 변수 또는 멤버 함수를 이어 받아 새로운 기능을 확장하는 것을 의미한다.

- 상속을 이용하면 중복적으로 발생하는 기능 또는 속성을 클래스에 선언 후 해당 클래스를 사용하는 것이 가능하다.

▷ 올바른 상속 관계를 만들어 내는 규칙

- is a의 관계
ㄴ 특정 클래스가 또 다른 클래스의 모습으로 허용될 경우

- has a의 관계
ㄴ 특정 클래스가 또 다른 클래스로 포함이 허용될 경우

EX)
- 인간은 학생이다. X
- 학생은 인간이다. O

- 위의 예시처럼 학생은 인간이기도 하기 때문에 is a의 관계가 성립된다.
ㄴ 학생 클래스가 인간 클래스를 상속한다면 이는 올바른 구조라는 것을 의미

＊ 상속 문법
EX) class 파생 클래스(자식 클래스) : 접근 지정자 기본 클래스(부모 클래스)

private 상속 : 
- 기본 클래스를 private로 상속 받으면 기본 클래스의 protected, public 멤버들은 모두 파생 클래스의 private 멤버로 상속 확장된다.

public 상속 : 
- 기본 클래스를 public으로 상속 받으면 기본 클래스의 protected, public 멤버들은 접근지정 변경 없이 파생 클래스의 public 멤버로 확장된다.

protected 상속 : 
- 기본 클래스를 protected로 상속 받으면 기본 클래스의 protected, public 멤버들은 모두 파생 클래스의 protected로 상속 확장이 된다.
*/

#pragma endregion

// 부모 클래스
class Unit
{
protected:
	char* name;
	int hp;
	int mp;
	int atk;
	bool die;

public:
	/*
	▶ 함수 오버로딩(중복 정의)
	- C++ 언어는 동일한 함수라 하더라도 입력 매개변수가 서로 다르다면 별개의 함수라고 인지하는 기능을 제공하고 있다.

	- 이 기능을 함수 오버로딩이라고 지칭한다.

	- 함수 오버로딩의 규칙은 입력 매개변수만으로 구분하기 때문에 함수의 반환형이 다르다 하더라도 이는 함수 오버로딩 규칙이 성립 하지 않는다.

	＊ 함수 오버로딩 특징
	1. 기존에 만들어 놓은 함수와 이름은 같지만 인수의 형태가 다른 함수

	2. 인수 형태는 같은데 반환값만 다른 경우는 모호한 에러 발생

	3. 같은 클래스의 멤버함수 간에 이뤄진다. (혹은 같은 스코프내)
	*/
	void attack(char* myName, char* enemyName);
	void attack(int atk, int enemyHP);
	void attack(bool enemyDie);

	// 상속 구조에서 굉장히 위험한 함수
	// void attack();

	// 가상 함수
	virtual void attack();

	Unit();
	~Unit();
};

