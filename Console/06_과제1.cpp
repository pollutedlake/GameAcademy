/*
���� 1. ���� �� ��հ� ���ϱ�

- �׸��� 6��

- ���� �� : ĳ���� ��� ����Ʈ ������ ���� ���̵� (��Ÿ ���)

- ����  : 1���� �迭�� ���� ���� �� ��հ��� ���ؼ� ����� ��Ų��.
�� 1. ���� �Է��ϴ� ����
�� 2. ���� �Է��ϴ� ���� X

*/
#include "06_����1.h"

namespace AVERAGE
{
	void averageInputValue() {
		cout << "���� �Է� �޾� ���� �򰡸� �����մϴ�.\n�� 6���� �׸� ���� ������ �Ű��ּ���(0 ~ 10)\n";
		int avaluationValue[6];
		float sum = .0f;
		string item[6] = { "ĳ����", "���", "����Ʈ", "������", "����", "���̵�" };
		int sizeAvaulationValue = sizeof(avaluationValue) / sizeof(avaluationValue[0]);
		for (int i = 0; i < sizeAvaulationValue; i++) {
			cout << item[i] << " : ";
			cin >> avaluationValue[i];
			sum += avaluationValue[i];
		}
		cout << "�� ���ӿ� ���� ����� ���� ��� = " << sum / sizeAvaulationValue << endl;
	}

	void averageNotInputValue() {
		cout << "���� �Է¹��� �ʰ� ���� �򰡸� �����մϴ�.\n";
		int avaluationValue[6] = { 0, 1, 2, 3, 4, 5 };
		float sum = .0f;
		string item[6] = { "ĳ����", "���", "����Ʈ", "������", "����", "���̵�" };
		int sizeAvaulationValue = sizeof(avaluationValue) / sizeof(avaluationValue[0]);
		for (int i = 0; i < sizeAvaulationValue; i++) {
			cout << item[i] << ":" << avaluationValue[i] << endl;
			sum += avaluationValue[i];
		}
		cout << "�� ���ӿ� ���� ����� ���� ��� = " << sum / sizeAvaulationValue << endl;
	}
}