/*
����4. ���Ըӽ�

- �ʱ� ������ : 1��

- 777 ���� ���� 3�� ���� �� ���ñݾ��� 12��

- 7�� ������ ���� ���� 3�� ���ý� ���ñݾ��� 5��

- ���� ���� 2�� ���� �� ���ñݾ��� 2��

- �� �ܿ��� ���ñݾ� �ұ�

�ʼ� :
1. �귿�� �����ϴ� ��� �ð�ȭ
2. ������ �ϰ� ���� �귿�� ������ ������ �귿�� �ڵ����� ��� �ݺ��ȴ�.
3. ġƮ �ʼ�
�� ġƮ�� Ȱ��ȭ �Ǹ� ���� 3���� �Է� �޴´�. (EX : 777)
�� �������� �귿�� �õ��� �ǰ� 777�� ��÷�Ǵ°� Ȯ���� �� �ְ� �����
*/
#include<iostream>
#include<time.h>
#include<Windows.h>
using namespace std;

static int i = 0;

void func2(int j);
void func2(int j) {
	int k;
	cin >> k;
}

void func() {
	int firstN = rand() % 10;
	int secondN = rand() % 10;
	int thirdN = rand() % 10;
	cout << firstN << secondN << thirdN << "\t �귿�� ���߷��� 0�� �Է��ϼ���.";
	Sleep(100);
	system("cls");
	func2(i++);

}



void main() 
{
	srand(time(NULL));
	int a = 0;
	A:
	cout<<"test1"<<endl;
	cin >> a;
	Sleep(1);
	cout << "test2" << endl;
	//func();
	goto A;
}