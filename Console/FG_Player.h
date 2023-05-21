#pragma once
#include<iostream>
#include<Windows.h>
using namespace std;

class FG_Player
{
private:
	int hp = 100;
	int pos = 0;
	char* playerIdle[19] =	  {   "  ����",
								  " ��    ��",
								  " ��    ��",
								  " ��    ��",
								  "  ����",
								  "    ��",
								  "  ����",
								  " �� �� �� ��",
								  "��  ��  ��",
								  " �� ��",
								  "  ���",
								  "    ��",
								  "    ��",
								  "    ��",
								  "   �� ��",
								  "  ��   ��",
								  "��      ��",
								  "��      ��",
								  "��      ��",
	};
	char* playerAttack[19] = {   "    ����",
								    "   ��   ��",
								    "   ��   ��",
								    "   ��   ��",
								    "    ����",
								    "     ��",
								    "    ���������",
								    "   �� ��",
								    "  ��  ��",
								    "   �� ��",
								    "    ���",
								    "     ��",
								    "     ��",
								    "     ��",
								    "    �� ��",
								    "   ��   ��",
								    "  ��     ��",
								    " ��     ��",
								    "��     ��",
	
	};
	int state = 0;

public:
	FG_Player();
	~FG_Player();
	char* returnMotion(int i);
	int returnPos();
	void getDamege(int damage);
	void move(int dir);
	void changeState();
	int returnState();
	int returnHp();
};

