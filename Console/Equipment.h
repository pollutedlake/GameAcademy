#pragma once
#include<iostream>
using namespace std;

class Equipment
{
protected:
	char* _name;
	int _price;
	char* _explanation;
	int _type;

public:
	Equipment();
	virtual ~Equipment() {}

	void setName(char* name) { _name = name; }
	char* getName() { return _name; }
	void setPrice(int price) { _price = price; }
	int getPrice() { return _price; }
	int getType() { return _type; }
	void setExplanation(char* explanation) { _explanation = explanation; }
	char* getExplanation() { return _explanation; }
	virtual void printEquipment();
};

