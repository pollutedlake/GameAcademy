#pragma once
#include "Unit.h"

class Tank : Unit
{
public:
	/*
	오버라이딩(재정의)
	
	- 기존에 정의된 함수를 무시해 버린다. (재정의 하겠다.)
	- 상속관계에서 자식의 클래스가 부모의 클래스에 대해서 행해진다.
	- 함수를 상속받아 재정의 한다.
	*/
	virtual void attack() override;

	Tank();
	~Tank();
};

