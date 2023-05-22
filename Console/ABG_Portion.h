#pragma once
class ABG_Portion
{
private:
	int _heal;

public:
	ABG_Portion();
	~ABG_Portion();

	int getHeal() { return _heal; }
	void setHeal(int heal) { _heal = heal; }
};

