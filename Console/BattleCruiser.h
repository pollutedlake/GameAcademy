#pragma once
#include"Unit.h"
//#include "Tank.h"

// 다중 상속 -> 읽어 보는걸 추천
// ㄴ 다이아몬드 구조 + 스파게티
class BattleCruiser : public Unit//, Tank
{

public:
	virtual void attack() override;

	BattleCruiser();
	~BattleCruiser();
};

