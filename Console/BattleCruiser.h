#pragma once
#include"Unit.h"
//#include "Tank.h"

// ���� ��� -> �о� ���°� ��õ
// �� ���̾Ƹ�� ���� + ���İ�Ƽ
class BattleCruiser : public Unit//, Tank
{

public:
	virtual void attack() override;

	BattleCruiser();
	~BattleCruiser();
};

