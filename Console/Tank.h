#pragma once
#include "Unit.h"

class Tank : Unit
{
public:
	/*
	�������̵�(������)
	
	- ������ ���ǵ� �Լ��� ������ ������. (������ �ϰڴ�.)
	- ��Ӱ��迡�� �ڽ��� Ŭ������ �θ��� Ŭ������ ���ؼ� ��������.
	- �Լ��� ��ӹ޾� ������ �Ѵ�.
	*/
	virtual void attack() override;

	Tank();
	~Tank();
};

