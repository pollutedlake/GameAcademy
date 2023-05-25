#include "MainGame_06.h"
//#pragma warning(disable : 4996)

MainGame_06::MainGame_06()
{
	/*
	�� STL �ʿ��� ���� ����ϴ� ���

	- STL������ �����̳ʿ� ���� �ణ�� ����� ���̸� ������ ������ �̸��� ��� �Լ��� �ټ� �����Ѵ�.

	- begin()

	- end()

	- clear()

	- empty()

	- erase()

	- insert()

	- size()

	��
	- find()
	�� ���ڷ� �� ���� ã�´�.
	*/

	//_mData.insert(pair<string, int>("���α׷���", 50));
	//_mData.insert(pair<string, int>("���ΰ�", 50));
	//_mData.insert(pair<string, int>("����", 50));
	//_mData.insert(pair<string, int>("������", 50));

	_mData.insert(make_pair("�л�A", 10));
	_mData.insert(make_pair("�л�B", 20));
	_mData.insert(make_pair("�л�C", 30));
	_mData.insert(make_pair("�л�D", 40));
	_mData.insert(make_pair("�л�E", 50));
	_mData.insert(make_pair("�л�F", 60));

	pair<string, int> pr1("�л�G", 100);
	_mData.insert(pr1);

	if (_mData["���ĥ�己"])
	{
		cout << "�ִ�" << endl;
	}
	else
	{
		cout << "����" << endl;
	}

	_mData.erase("�л�C");
	for (_miData = _mData.begin(); _miData != _mData.end(); ++_miData)
	{
		cout << _miData->first << ", " << _miData->second << endl;
	}
	if (_mData.find("KGA") != _mData.end())
	{
		cout << "�ִ�" << endl;
	}
	else
	{
		cout << "����" << endl;
	}

	cout << endl;

	cout << "������ ã�� �ִ°���..?" << endl;
	string name;
	while (cin >> name)
	{
		if (_mData.find(name) != _mData.end())
		{
			cout << name << "�� ���̴�" << "[" << _mData[name] << "]" << endl;
		}
		else
		{
			cout << "�׷� ����� �츮�ݿ� ����..?" << endl << endl;
			break;
		}
	}

	cout << '\n';

	// ���� ����. decltype

	map<string, int> valueList;

	for (int i = 0; i < 10; i++)
	{
		char szKey[MAX_PATH] = "";

		sprintf_s(szKey, "Key_%d", i + 1);


		valueList.insert(make_pair(szKey, i + 1));
		valueList.insert(decltype(valueList)::value_type(szKey, i + 1));
		valueList.insert(map<string, int>::value_type(szKey, i + 1));
	}
}

MainGame_06::~MainGame_06()
{

}

pair<pair<int, int>, pair<int, int>> MainGame_06::getMinMaxValue(std::vector<int> a_oValueList)
{
	return pair<pair<int, int>, pair<int, int>>();
}

void MainGame_06::printMap(std::map<std::string, int> a_oValueList)
{
}

