#include <iostream>
#include <time.h>
#include<random>

using namespace std;

#pragma region ���� + ����
/*
�� ����

- ���� (Random Number) : �������� ����� ���� �� �� ���� ��
�� �и� �������� ���� ���� or ���� �������� �̸� �� �� ������ �ϱ� ���� ������ �ݵ�� �ʿ��ϴ�.
�� rand()�Լ��� ȣ���ϸ� 0 ~ 321767���� ������ �� �� �ϳ��� �ҷ��´�.
�� rand()�Լ��� ������ ��Ģ�� ���� ������ �����ϴµ� ��Ģ�� �׻� ������ ������ �����Ǵ� ������ �׻� ����.

�� ���� ���� ��ƾ

- �̷��� ���� ���� ��ƾ ��Ģ�� ��ȭ�� �� �� �ִ� srand()��� �Լ��� �־���.

- srand()�� ���� �߻��⿡ ������ �߻���Ű�� ������(Seed)�� �����Ͽ� ���� �߻���� �� �������� �������� ������ �߻� ��Ų��.

- ���� �߻��ð� ����� ������ �ð��� ������ ���� ���� ������ �ð����� ���������� ����Ѵٸ� ������ ���� �� �ִ�.

��  ����

- ���� ���α׷��ֿ����� ������ �����͸� ���� ������ ���Ѵ�.

�� 1. ���α׷��Ӱ� �ۼ��� ���
�� 2. ���� �Լ��� �̿��ؼ�
*/
#pragma endregion

void main()
{
	srand(time(NULL));

	int damage = (rand() % 10) + 1;

	cout << "������ : " << damage << endl;

	for (int i = 0; i < 10; i++)
	{
		printf("%d \t", rand());
	}

	// ����
	int num[10];
	int dest, sour, temp;
	for (int i = 0; i < 10; i++) 
	{
		num[i] = i;
	}

	for (int i = 0; i < 10; i++) 
	{
		cout << num[i] << endl << endl;
	}

	for (int i = 0; i < 1000000; i++)
	{
		dest = rand() % 10;
		sour = rand() % 10;

		temp = num[dest];
		num[dest] = num[sour];
		num[sour] = temp;
	}
	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i << "] = " << num[i] << endl;
	}

	cout << endl;

	/*
	�� �Ϻ��� ����

	- srand/rand() �Լ��� ������ �Ϻ��� ������ ������ �� ����.

	- �׷��⶧���� C++11 �������� ���Ӱ� �߰��� ����̽��� �̿��ؾ� �Ϻ��� ������ �����ϴ� ���� �����ϴ�.
	�� Random Number Generator
	*/

	std::random_device oRandomDevice;

	// �õ� ���� (���� ���� ���� �ʱ�ȭ)
	// ���� ���� ������ -> �޸��� �� 19937�� ���ٴ� ��
	std::mt19937_64 rnd(oRandomDevice());

	cout << "RandomDevice : \n" << rnd << endl;

	int RandomMin = 1;
	int RandomMax = 10;

	// ����
	std::uniform_int_distribution<int> range(RandomMin, RandomMax);

	// �Ǽ�
	//std::uniform_real_distribution<float> range(RandomMin, RandomMax);

	// ���Ժ�����
	//std::normal_distribution<double> range(RandomMin, RandomMax);

	cout << "\n";

	int RandomValue = range(rnd);

	cout << "���Ⱚ : " << RandomValue << endl;

	int nNumberA = (rand() % 10) + 1;
	int nNumberB = (rand() % 10) + 1;

	int nNumberC = (oRandomDevice() % 10) + 1;
	int nNumberD = (oRandomDevice() % 10) + 1;
}