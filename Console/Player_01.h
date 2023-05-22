#pragma once
#include<iostream>

using namespace std;

#pragma region ������ ������
/*
�� ������ + ������

�� ������ (Accessor)
�� ��� ���� ���� ��ȯ�ϴ� ��� �Լ��� ��Ī

�� ������ (Mutator)
�� ��� ���� ���� �����ϴ� ��� �Լ��� ��Ī

�� �Ϲ������� Getter(get) / Setter(set)�̶�� �Ҹ���.
*/
#pragma endregion

class Player_01
{
private:
	int _hp;
	int _mp;
	int _def;
	int _att;
	float _speed;

public:

	/*
	C++ ����� �Լ��� �⺻������ ȣ���� �ɶ� �Լ��� ���𿡼� ����� ��ŭ�� �Է��� �Ѱ��ִ� ���� ��Ģ�̴�.
	������ ����Ʈ �Ű������� �̿��ϸ� �Լ� ȣ��� �Է� ���� �ѱ�� ���� ������ �� �ִ�.
	�̴� �� �ƹ��� �Է��� ���� ��� �⺻������ ���ϴ� ���� �����ϴ� ���� �����ϴٴ� ��⸦ ���Ѵ�.
	*/
	void setID(int ID = 0);

	void setName(std::string Name = "");

public:
	// ĸ�� �Լ� (Getter + Setter)
	// �� Getter + Setter�� �Ϲ������� ������Ͽ��� ������ ��Ģ���� �Ѵ�.
	int getHP() { return _hp; }
	void setHP(int hp) { _hp = hp; }
	int getMP() { return _mp; }
	void setMP(int mp) { _mp = mp; }
	int getDef() { return _def; }
	void setDef(int def) { _def = def; }
	int getAtt() { return _att; }
	void setAtt(int att) { _att = att; }
	int getSpeed() { return _speed; }
	void setSpeed(int speed) { _speed = speed; }

	Player_01();
	~Player_01();
};

