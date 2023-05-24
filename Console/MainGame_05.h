#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>

using namespace std;

// 14. STL ���� + ���ͷ�����

#pragma region STL ���� + ���ͷ�����
/*
�� ���Ͷ�?

-STL(Standard Template Library)�� ���� �ִ� �÷��� Ŭ���� �� �ϳ��μ� �迭ó�� �����ϴ� �÷��� Ŭ������ �ǹ��Ѵ�.

- �� �Ϲ����� �迭�� ���� �����͸� �߰��ϱ� ���� ������ ���ѵǾ� ���� �ʱ� ������ ��ǻ�Ͱ� ����ϴ� �� ���� ���� �����͸� �߰��ϴ� ���� �����ϴ�.

EX)

vector<���ø� �μ�> ��ü �̸�(������ �μ�);

std::vector<int> ValueListA		->		int�� �����͸� �����ϰ� �ִ� ����
std::vector<flaot> ValueListB	->		float�� �����͸� �����ϰ� �ִ� ����

- STL ���ʹ� ������ ����̴�.
�� ���ٸ� ��Ģ�̳� ������ ���� �Ϲ����� �����̳ʶ�� �θ� �� �ִ�.

- ���� ������ �����̳ʴ� �����͸� �������� �����ϸ� ������ �����̳ʴ� ���Ե� ����� ������ �״�� �����ȴ�.

�� ������ �����̳�

- �⺻ �����̳� ��Ģ�� �Ʒ� ��Ģ�� �����Ѵٸ� ������ �����̳ʶ�� �θ���.
����ǥ������ vector, list, deque ���� �ִ�.

* ��Ģ

1. ��� ��Ҵ� ���� ������� ��ġ�Ǿ�� �Ѵ�.
�� ù��° ��ҿ� ������ ��Ҹ� ������ ������ ��ҵ��� �ݵ�� �յڷ� ������ ��Ҹ� �ϳ��� ������ �־�� �Ѵ�.

2. �ּ��� ������ �ݺ��ڸ� ������ �־�� �Ѵ�. (forward iterator)
�� �̴� �ݺ��ڰ� �̵��Ҷ����� ��ҵ��� ������ ������ ������ ������ �ֱ� �����̴�.

3. ������ �����̳��� ��ҵ��� ��Ȯ�� ������ ������.
�� ��Ȯ�� ������ ������ ������ Ư�� ��ġ�� �����ϴ� ������ �����ϴ�.

�� ������ Ư¡

- ������ ��� + �迭 ��� �����̳�

- C++ ���� Ȱ�� �󵵰� ���� ���� ����ϱⰡ ���� ����.

- �б� �ɷ��� Ź���ϴٴ� ��

- �ݸ鿡 ������� ������.

- ���ο� �޸𸮸� �Ҵ��� ���� �߰��� ���ҿ� �Բ� "����"�Ѵ�.

- �޸� �Ҹ��� ũ��.

- Back Iterator�� Forward Iterator�� �� �� �����Ѵ�.

�� ���ͷ����Ͷ�?

- �÷��� Ŭ������ �����Ǿ� �ִ� �� �����Ϳ� �����ϱ� ���� ������ ��ü�ν� STL�� ���ԵǾ� �ִ� ��� �÷��� Ŭ������ �������� ���۰� ���� ��Ÿ���� begin�� end �Լ��� ���ϰ� �ִ�.

- begin�� end �Լ��� ���ϰ� �ֱ� ������ ������ �ݺ��ؼ� �÷��ǿ� ���ԵǾ� �ִ� ��� �����Ϳ� �����ϴ� ���� �����ϴ�.

EX)

for (auto Iterator = ValueListA.begin(); Iterator != ValueListA.end(); ++Iterator)
{
	! Do Somethig
}
*/
#pragma endregion

struct STData
{
	int m_nValue;
	std::string m_oString;
};

class MainGame_05
{
private:
	// ������ ���� ����
	vector<int> _vNumber;
	// ������ ������ �ݺ��� ����
	vector<int>::iterator _viNumber;
	vector<int>::reverse_iterator _vriNumber;

public:
	void printVector();
	// �ζ��� �Լ� ����ӵ� ���
	// �Լ��� ���ÿ��� ���������� �ζ��� �Լ��� ���ÿ��� �������� ����
	// �Լ��� ���ǿ� ���� �������� ���� Getter�� Setteró��
	inline void LinePrint() { cout << "=====================================" << endl; }


	void sampleVector(std::vector<int> valueList);
	void sampleSTVector(std::vector<STData> ValueList);
	void practiceVector(void);

	MainGame_05();
	~MainGame_05();
};

