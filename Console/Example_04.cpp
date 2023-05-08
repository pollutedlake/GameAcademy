#include<iostream>
using namespace std;

#pragma region ���ǹ�
/*

�� ���ǹ��̶�?

- ���α׷��� ����Ǵ� ���� ������ �ִ� ����� ���� ���缭 ���� �ٸ� ����� �����ϱ� ���� ������ �ǹ��Ѵ�.

- ���ǹ��� �̿��ϸ� �پ��� ����� ����ϴ� ���α׷��� �ۼ��ϴ� ���� ����

�� C / C++ ��� ���ǹ��� ����
�� if ~ else��
�� switch ~ case ���ǹ�

�� if ~ else ��

-������ ���� (���ǿ� ���� ���� ����)

- ������ �����ϴ� if���� �߰��ϸ� ������ if���� �ǳʶ��.

- if�� else�� ������ �̷�� ������ ���� ���� �ƴ϶� �ϳ�

- if ~ else������ ������ �������� �˻�� ������ �Ʒ��� ����������

- ������ �����Ǿ� �ش� ������ �����ϰ� ���� ������ else������ �ǳʶ��.

- ������ �������� ������ ������ else���� �����ϴ� ����

EX)
if (���ǽ�)
{
	���ǽ��� ���̸� ����� �ڵ�
}

- �� ���ǽ��� if���� ���� �ȵǾ��� �� ���ǽ��� ���̶�� ����
else if (���ǽ�) {
	���ǽ��� ���̸� ����� �ڵ�
 }
 - ������
 else {
	�� ���ǵ��� �������� ������ ����� �ڵ�
 }
 
 �� switch��

 - switch���� ����ϴ� ���� ������ ���Ǻ��� ������ ���ֱⰡ �����ϱ� ������ ���� ��ȭ, ������ ���� ��쿡 ����ϸ� ȿ���� �� �� �ִ� ����

 - �׸��� if���� �ſ� �����ϴٴ� Ư¡�� ������ switch������ �ۼ��� �Ǵ� ������ if������ ���� ��ü�� �����ϴ�.

 EX)

 switch (���� ��(Data Type)) {
	case 1:
	default:
		break;
 }

 �� ���� ������ int���� char���� �� �� �ִ�.
 �� ������ �ַ� int���� ���� ����.

 - switch���� ���� ���� ���� ���� ������ �����Ѵ�.
	�� EX) ���� ���� 1�̸� case 1: �� ����ǰ�
		   ���� ���� 2�̸� case 2: �� ����ȴ�.
		   
- switch ~ case ���ǹ��� default Ű����� if ~ else ���ǹ��� else���� �ش��ϴ� ������ �����Ѵ�.

- ��, switch ~ case ���ǹ��� if ~ else ���ǹ����� �޸� ������ �ش��ϴ� ������ �� �� �����Ӵ��� ���ǹ����� ���� �� �ִ� �ڷ����� ������ ���

�� ���� �̿ܿ� ���� �� ���� ������ �ùٸ� ����� ��������� �ʴ´�.

�� C / C++ ��� ����� ����

1. return
�� ���ǹ��϶��� �ٽ� ���� ������. / �Լ������� ���� ��ȯ -> �ʱ�ȭ

2. continue
�� ���ǹ��϶��� ������ ���� �ʰ� �ǳʶ��. / �ݺ��������� �ٷ� ���� ��������

3. break
�� ������ �����. / while�� ���� ���� �ݺ����� ���� ������.

4. goto
�� ���� ���������� �Ҹ��� goto�� ���� �����ϸ� �߰��� �ִ� �ڵ带 �����ϰ� �ش� �󺧷� �̵��Ѵ�.

�� break���� �ݺ����� Ż���ϴ� �뵵�� ���� ���ȴ�.
�� �ݺ����� Ż���ϴ� �뵵�̱� ������ ��������� ���� ����� ������ �ٲ��.
*/
#pragma endregion

void main() {
	int nOperator;
	cout << "���� �Է��� ���� = ";
	cin >> nOperator;

	// ����
	if (nOperator == 0) {
		cout << "���� ���� ������" << endl;
	}

	// �Ǵ�
	else if (nOperator == 1) {
		cout << "��ƺ���" << endl;
	}

	// ������
	else {
		cout << "������" << endl;
	}

	cout << "\n";

	int inputNumber;

	cout << "0��, 1��, 2���� �ϳ��� �����ϼ���." << endl;
	cout << "inputNumber = ";
	cin >> inputNumber;

	// ������ ���
	// �� ������ ���ϴ�.
	switch (inputNumber) {
	case 0:
		cout << "0�� �Է½� ���" << endl;
		break;

	case 1:
		cout << "1�� �Է½� ���" << endl;
		break;

	case 2:
		cout << "2�� �Է½� ���" << endl;
		break;

		// else
	default:
		cout << "�׿� �Է½� ���" << endl;
		break;
	}

	cout << "\n";

	/*
	�� C/C++ ����� ��/�� ������ ����

	- ���� ��/�� ������
	- ���� ��/�� ������

	��
	�� ���� ���� ������ VS ���� ���� ������

	- ���� ���� �����ڴ� �ش� ������ ���� ���� ��Ų �� ���꿡 Ȱ���ϴ� �ݸ�, ���� ���� �����ڴ� ���꿡 Ȱ���� �� �� �ش� ������ ���� ����ȴ�.
	*/

	int nValue = 10;

	cout << "��/ �� ���� ��� ��� = " << endl;
	
	// 11
	cout << "���� ���� ����: " << ++nValue << endl;
	// 10
	cout << "���� ���� ����: " << --nValue << endl;
	// 10
	cout << "���� ���� ����: " << nValue++ << endl;
	// 11
	cout << "���� ���� ����: " << nValue-- << endl;

	// 10
	cout << "nValue �� : " << nValue << endl;

	cout << '\n';

	// ���� ���� ���� ��Ŀ��� ���������� Ʋ���ٰ� �ϴ��� �߸��� ����� ��µǰ� ������.
	// ������ �޸� �����̾��ٸ� ��©���� ������.

	int nValueA, nValueB, nValueC, nValueD;
	nValueA = nValueB = nValueC = nValueD = 10;

	// ��
	if ((nValueA == nValueB++) && (nValueC++ < ++nValueD)) {
		cout << "��/�� ���� ��� ��� = " << endl;

		// 10
		cout << nValueA << endl;
		// 11
		cout << nValueB << endl;
		// 11
		cout << nValueC << endl;
		// 11
		cout << nValueD << endl;
	}

	// cout << "�����̶�� ���� ��µȴ�." << endl;
	cout << '\n';

	for (int i = 2; i < 100 + 2; i++) {

		// �� �� ���� �� ������?
		if (i % 2 != 0) continue;
		cout << "��°�: " << i << endl;
		

		if (i % 2 != 0) {
			cout << "��°�: " << i << endl;
		}
	}

	cout << '\n';
	/*
	�� goto��

	- �ٷ� �߼����� ���� �����Ѵ�.
	�� �������� ����߸��� ���İ�Ƽ �ڵ带 ����µ� �����Ѵ�.
	�� ����ϱ� ���� ���� �ʿ��Ѱ�? ��� �ǹ��� �ݵ�� ������

	EX)
	goto ���̺�;
	���̺�:
	*/

	for (int i = 2; i < 10; i += 1) {
		for (int j = 1; j < 10; j += 1) {
			if (i % 2 == 0) {
				goto EXIT_1;
			}

			if (i % 5 == 0) {
				goto EXIT_2;		// for���� ����ġ�� ���� ������ �޸� ���� �߻�
			}

			cout << i << " x " << j << " = " << i * j << endl;
		}
	EXIT_1:
		cout << "i ���� ��� �� ����" << i << endl << endl;
	}
EXIT_2:
	cout << "�ݺ��� Ż��" << endl;
}