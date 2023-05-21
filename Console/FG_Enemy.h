#pragma once
#include<iostream>
using namespace std;
class FG_Enemy
{
private:
	int hp = 100;
	int pos = 90;
	char* enemyIdle[19] = {  "    ����",
							 "   ��    ��",
							 "   ��    ��",
							 "   ��    ��",
							 "    ����",
							 "      ��",
							 "    ����",
							 "�� �� �� ��",
							 "  ��  ��  ��",
							 "      �� ��",
							 "      ���",
							 "      ��",
							 "      ��",
							 "      ��",
							 "    �� ��",
							 "   ��   ��",
							 " ��      ��",
							 " ��      ��",
							 " ��      ��",
	
	};
	char* enemyAttack[19] = {		"      ����",
									"      ��    ��",
									"      ��    ��",
									"      ��    ��",
									"      ����",
									"          ��",
									"��������",
									"          �� ��",
									"          ��  ��",
									"          �� ��",
									"          ���",
									"          ��",
									"          ��",
									"          ��",
									"        ��  ��",
									"       ��    ��",
									"      ��      ��",
									"       ��      ��",
									"        ��      ��",


	};
	int state = 0;

public:
	FG_Enemy();
	~FG_Enemy();
	int returnHp();
	char* returnMotion(int i);
	int returnPos();
	void getDamege(int damage);
	void move(int dir);
	void changeState();
	int returnState();
};

