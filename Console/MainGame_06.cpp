#include "MainGame_06.h"
//#pragma warning(disable : 4996)

MainGame_06::MainGame_06()
{
	/*
	▶ STL 맵에서 자주 사용하는 기능

	- STL에서는 컨테이너에 따라 약간의 기능적 차이만 있을뿐 동일한 이름의 멤버 함수가 다수 존재한다.

	- begin()

	- end()

	- clear()

	- empty()

	- erase()

	- insert()

	- size()

	★
	- find()
	ㄴ 인자로 들어간 값을 찾는다.
	*/

	//_mData.insert(pair<string, int>("프로그래밍", 50));
	//_mData.insert(pair<string, int>("공부가", 50));
	//_mData.insert(pair<string, int>("제일", 50));
	//_mData.insert(pair<string, int>("쉬워요", 50));

	_mData.insert(make_pair("학생A", 10));
	_mData.insert(make_pair("학생B", 20));
	_mData.insert(make_pair("학생C", 30));
	_mData.insert(make_pair("학생D", 40));
	_mData.insert(make_pair("학생E", 50));
	_mData.insert(make_pair("학생F", 60));

	pair<string, int> pr1("학생G", 100);
	_mData.insert(pr1);

	if (_mData["재능칠드런"])
	{
		cout << "있다" << endl;
	}
	else
	{
		cout << "없다" << endl;
	}

	_mData.erase("학생C");
	for (_miData = _mData.begin(); _miData != _mData.end(); ++_miData)
	{
		cout << _miData->first << ", " << _miData->second << endl;
	}
	if (_mData.find("KGA") != _mData.end())
	{
		cout << "있다" << endl;
	}
	else
	{
		cout << "없다" << endl;
	}

	cout << endl;

	cout << "누구를 찾고 있는건지..?" << endl;
	string name;
	while (cin >> name)
	{
		if (_mData.find(name) != _mData.end())
		{
			cout << name << "의 나이는" << "[" << _mData[name] << "]" << endl;
		}
		else
		{
			cout << "그런 사람은 우리반에 없다..?" << endl << endl;
			break;
		}
	}

	cout << '\n';

	// 한줄 조사. decltype

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

