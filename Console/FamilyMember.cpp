#include "FamilyMember.h"

FamilyMember::FamilyMember()
{
	cout << "�̸��� �Է��ϼ��� : ";
	cin >> this->name;
	cout << "������ �Է��ϼ��� : ";
	cin >> this->age;
	cout << "��������� �Է��ϼ��� : ";
	cin >> this->birthdate;
	cout << "������ �Է��ϼ��� : ";
	cin >> this->sex;
	cout << "������ ������ �Է��ϼ��� : ";
	cin >> this->relationWithMe;
	cout << endl;
}

FamilyMember::~FamilyMember()
{

}

void FamilyMember::printFamilyMember()
{
	cout << "�̸� : " << name << endl;
	cout << "���� : " << age << endl;
	cout << "������� : " << birthdate << endl;
	cout << "���� : " << sex << endl;
	cout << "������ ���� : " << relationWithMe << endl;
	cout << endl;
}