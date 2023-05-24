#include "MainGame_05.h"


MainGame_05::MainGame_05()
{
	/*
	* STL ���Ϳ��� ���� ����ϴ� ���
	- push_back()
	�� �����͸� �ڿ������� �߰��Ѵ�.(��)

	- emplace_back()
	�� �����͸� �ڿ������� �߰��Ѵ�.(��)

	- pop_back()
	�� ������ �ڿ�����Ÿ ���� ����

	- size()
	�� ������ ũ��(����)

	- resize()
	�� ũ�� �翬��

	- clear()
	�� �ε��� ���� ����, �ݺ��ڸ� ���� �� ��� �޸𸮱��� ����

	- begin()
	�� ������ 0��° �ε���

	- end()
	�� ������ ������ �ε���

	- insert(��ġ, ��)
	�� ����
	
	- insert(��ġ, ����, ��)
	�� ����

	- erase(��ġ)
	�� ����
	*/

	_vNumber.push_back(1);
	_vNumber.push_back(2);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;

	LinePrint();

	_vNumber.pop_back();
	_vNumber.pop_back();

	int num[2];
	num[0] = 1;
	num[1] = 2;

	cout << num[0] << endl;
	cout << num[1] << endl;

	LinePrint();

	// ������ : ��
	for (int i = 0; i < 10; i++)
	{
		// 
		_vNumber.push_back(i + 1);
		cout << _vNumber[i] << endl;
	}

	LinePrint();

	_vNumber.push_back(1);

	_vNumber.pop_back();

	_vNumber.clear();

	//_vNumber.insert(_vNumber.begin() + 5, 100);

	_vNumber.push_back(1);
	_vNumber.push_back(2);

	_vNumber.insert(_vNumber.begin() + 1, 100);

	// ������ : ��
	// �� ���� ������ ���� ���
	for (int i = 0; i < _vNumber.size(); i++)
	{
		cout << _vNumber[i] << endl;
	}

	LinePrint();
	
	// ������ �ֻ�
	// �� �ݺ��ڸ� ���� ��ȸ

	for (_viNumber = _vNumber.begin(); _viNumber != _vNumber.end(); ++_viNumber)
	{
		cout << *_viNumber << endl;
	}
	LinePrint();
}

MainGame_05::~MainGame_05()
{

}

void MainGame_05::printVector()
{
	LinePrint();
	LinePrint();
	LinePrint();

	cout << "push.back()" << endl;

	_vNumber.push_back(1);
	_vNumber.push_back(2);
	_vNumber.push_back(3);
	_vNumber.push_back(4);
	_vNumber.push_back(5);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;
	cout << _vNumber[2] << endl;
	cout << _vNumber[3] << endl;
	cout << _vNumber[4] << endl;

	LinePrint();

	cout << "insert()" << endl;
	_vNumber.insert(_vNumber.begin() + 2, 10);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;
	cout << _vNumber[2] << endl;
	cout << _vNumber[3] << endl;
	cout << _vNumber[4] << endl;

	LinePrint();

	cout << "pop_back" << endl;
	// ���� : ������ üũ / �ݺ��� ���ο��� ����� ������ �鿩�� �Ѵ�.
	_vNumber.pop_back();

	for (int i = 0; i < _vNumber.size(); i++)
	{
		cout << _vNumber[i] << endl;
	}

	/*
	- �־��� ������ ��� �����͸� �ϳ��� ��ȸ�ϸ� �����ϴ� ��쿡 ����Ѵ�.
	�� for each�� �����̳��� �ݺ��� ����

	- for each�� vector�� �����̳� ��Ұ� �ƴϰ� �˰��� �Լ�

	- ��� �����̳ʴ� �ݺ��ڸ� ������ ������ for each�� ����ؼ� �����̳��� ���� ������ �����ϴ�.

	- �̰� ������ ������ for each�� ���� ���ͷ����Ϳ� �����ϰ� ����Ʈ �������̸� �����̳ʸ� ��ȸ�ϸ鼭 ���ϴ� ��ҿ� ������ �����ϴ�.

	�� auto

	- �����Ϸ��� �����Ͻ� �ڵ����� �ڷ����� �߷��Ѵ�.

	- �����Ϸ��� �ڷ����� �߷��ϱ� ���ؼ��� ������� ������ �־����� �Ѵ�.

	C# -> var

	- C/C++ ���� �⺻������ ������ ������ �� �ش� ������ �ڷ����� ����ؾ� �Ѵ�.

	- auto Ű���� ��ü�� C#�� var�� �����ϸ� �ڷ����� Ȯ���Ǵ� �ñ�� ������ Ÿ��

	- auto Ű���忡 ���� �ڷ����� �����Ǵ� ������ ������ �Ҵ�Ǵ� �ʱⰪ�� ������ �Ǵ��ϱ� ������ auto�� ���� ���� ������ Ư������ �Ҵ��ؾ� �Ѵ�.
	*/

	// ������ ������ �ʿ���� ���������� ���������� ����Ѵ�.
	for each (auto p in _vNumber)
	{
		cout << "for each��" << p << endl;
	}

	cout << "erase()" << endl;

	// ����
	// erase(_vNumber.begin() + index);
	// ����
	// erase(_vNumber.begin() + s, _vNumber.being + e);

	_vNumber.erase(_vNumber.begin() + 1);
	// ��ŸƮ ->����
	_vNumber.erase(_vNumber.begin() + 1, _vNumber.begin() + 3);

	LinePrint();

	// ����ȸ
	for (_vriNumber = _vNumber.rbegin(); _vriNumber != _vNumber.rend(); ++_vriNumber)
	{
		cout << *_vriNumber << endl;
	}

	LinePrint();

	/*
	���� ����
	�� ������?
	at : ���� ��ġ�� ���Ҹ� �����ϴ� �������̽�
	at == [] ������ ������� �����ش�.

	[]: ���� ������ ���� �ʱ� ������ �ӵ��鿡�� �����ϴ�.
	at(): ���� ������ �ϱ� ������ �ӵ��� ������. ��, �������鿡���� �ξ� �����ϴ�.
	 */
	cout << "at()" << endl;

	cout << _vNumber.at(4) << endl;
	cout << _vNumber[4] << endl;

	LinePrint();

	// ù��° ��� ����
	// ���� ���� ������ �Ǿ� �ִ��� Ȯ���� �����ϰ�
	cout << "front" << endl;
	cout << _vNumber.front() << endl;

	LinePrint();

	// ������ ���� ����
	// �ε����� ���� ������ �Ǿ��ִ��� Ȯ���Ѵ�.
	cout << "back" << endl;
	cout << _vNumber.back() << endl;

	LinePrint();

	// ���� ������ ����� Ȯ���Ѵ�.
	cout << "size" << endl;
	cout << _vNumber.size() << endl;

	_vNumber.clear();

	LinePrint();


	// empty() : ��� ������ t / �ϳ� �̻� �ִ� ��� f
	if (_vNumber.empty())
	{
		cout << "���� �����." << endl << endl;

		// ��� �ִٸ� ���� ������ ������ �ʿ䰡 ����.
		return;
	}

	cout << _vNumber.at(2) << endl;
}

void MainGame_05::sampleVector(std::vector<int> valueList)
{
}

void MainGame_05::sampleSTVector(std::vector<STData> ValueList)
{
}

void MainGame_05::practiceVector(void)
{
}