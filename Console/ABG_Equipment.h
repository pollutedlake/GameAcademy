#pragma once
#include<iostream>
using namespace std;

class ABG_Equipment
{
private:
	int _stat;
	int _type;
	char* _name;
	int _accessoryStat;

public:
	ABG_Equipment();
	~ABG_Equipment();

	int getStat() { return _stat; }
	void setStat(int stat) { _stat = stat; }
	int getType() { return _type; }
	void setType(int type) { _type = type; }
	char* getName() { return _name; }
	void setName(char* name) { _name = name; }
	void setAccessoryStat(int accessoryStat) { _accessoryStat = accessoryStat };
	int getAccessoryStat() { return _accessoryStat; }
};

