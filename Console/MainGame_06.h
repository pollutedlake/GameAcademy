#pragma once
#include<iostream>
#include<map>
#include<string>
#include<set>
#include<vector>
#include<list>
#include<Windows.h>
// �ð� ���� ����� �ִ� �������
// C : time.h / C++ : ctime
#include<ctime>

// - C++11���� �߰��ƴ�.
// �� pair Ȯ�� ���� -> ��ȯ���� N�� �̻� ������ �� �ִ�.
// �� ���� ����ϴ� �Լ� or ���� ����ϴ� ���
// �� EX : make_tuple(Ʃ�� ����) / get(��������) / swap(Ʃ�� ���� �ٸ� ������ ����) / tie(Ʃ�� �� �з�)
#include<tuple>

using namespace std;

#pragma region STL ��
/*
�� ���̶�?

- ���Ϳ� ���������� �����͸� �����ϴ� �÷��� Ŭ���� �� �ϳ��ν� �����Ǿ� �ִ� �����͸� Ű/��� �������� �����ϴ� Ŭ������ �ǹ��Ѵ�.

EX)
std::map<int, int> ValueListA;		-> Ű : int��, ��� : int�� -> �� ����
std::map<std::string, int> ValueListA;		-> Ű : string��, ��� : int�� -> �� ����

�� ���� Ư¡

- �ΰ��� ¦�� �̷�� ������ ���� �����̳� (�ڷᱸ��)

- ���� �ڷᱸ���� BinarySearchTree -> ���� �� Ʈ���� �����Ǿ� �ִ�.
�� ���� �� Ʈ���� �ڰ� ���� ���� Ž�� Ʈ���� ���� / ���� ���� �����Ǿ� ������ �ڰ� ���� �����̱� ������ ���� ���� ��Ģ�� ������.

* ���� �� Ʈ��

- ��Ʈ ���� ���������� �����ϸ� ���� ��� ���� �������̴�.
�� NIL (nullLeaf) : �����Ͱ� ���� ���� ��� -> ���� ���

- ������ ���� �������� ���� �� ���� ������ ����� �ڽ��� �������̾�� �Ѵ�.
�� �ݴ��� ���� ���� ��Ģ ���� (EX : ������ ����� �ڽ��� �ݵ�� �������� �ʿ䰡 ����.)

- ���� ��忡�� ��Ʈ ������ ���� ��ο� �ִ� ������ ����� ������ ���ƾ� �Ѵ�.
�� ���� ���ԵǴ� ���� ���� ��尡 �Ǹ� �� �� �� ��带 �߽����� ���� �ڽĿ� ���� ��带 �����ϴ� �۾��� �Ѵ�.

- ���� �� Ʈ���� ���� �����߿� ���� ������ ���� ȸ���� �Ѵ�.(�� / ��)
�� ��ȸ���� ���� �ڽ� ����� ������ �ڽ� ��带 �θ� ����� ���� �ڽ����� ����
�� ��ȸ���� ������ �ڽ� ����� ���� �ڽ� ��带 �θ� ����� ������ �ڽ����� ����

- �뷮�� �˻��� Ưȭ�� STL

- �������� ����� ����/���� ��Ȳ������ ���� ���� ������ �ƴϴ�.

- �ʰ� ������ ����� �ϴ� STL ���� �����ϸ� ��Ȳ�� �°� ��� �����̳ʸ� ������� ����� �غ��� �Ѵ�. + ����
�� EX: set, multiset, multimap, tuple ���...

�� STL ���� �ٽ�

- 1. Ű�� ����� ���� ����.
�� ù��° ���� : first : Ű
�� �ι�° ���� : second : ��

- 2. �߰��ϴ� ����� insert()�� ����ϸ� Ű�� ���, �ΰ��� ���ÿ� �߰��ؾ� �ϴ� pair / make_pair()�� ����ؾ� �Ѵ�.

�� pair
�� �ΰ����� �ڷ����� �ϳ��� �����ִ� ����ü
�� ���ø� ����ü�̱� ������ � �ڷ����� ������ OK

�� make_pair
�� �� �״�� pair�� ����� �ִ� �Լ�
�� EX : p.first = x, p.second = y;		=>		p = make_pair(x, y);
*/
#pragma endregion

class MainGame_06
{
	
private:
	map<string, int> _mData;
	map<string, int>::iterator _miData;
	//multimap<vector<MainGame_06*>, set<vector<float>, list<vector<int>, vector<double>>>> _muData;

	multimap<map<list<MainGame_06*>, set<vector<float>>>, map<list<string>, vector<double>>> _muData;

	multimap<map<vector<MainGame_06*>, set<vector<float>>>, map<list<vector<int>>, vector<double>>> _muData2;

	// set
	set <vector<int>> _svData;
	// tuple
	tuple<int, string, char> _tupleValue;
public:
	std::pair<std::pair<int, int>, std::pair<int, int>> getMinMaxValue(std::vector<int> a_oValueList);
	void printMap(std::map<std::string, int> a_oValueList);

	MainGame_06();
	~MainGame_06();
};

