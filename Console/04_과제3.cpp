/*
���� ����1. �Լ��� �����͸� Ȱ���� ���������� �ϼ�

- ����� �����ϸ� �ȵǸ� �����Լ������� �Լ� ȣ�� �̿ܿ��� �ƹ��͵� �ۼ��� �� �� ����.
*/
#include<iostream>
#include<time.h>
#include<Windows.h>
using namespace std;

// a : ����, b : ����, c : ��
// a, b, c�� �ּҸ� �޾Ƽ� ����

static int a = 0;		// ����
static int rock = 1;	// ����
static int* b = &rock;	// ������ �ּ�
int comNum;				// ��ǻ�� ����
static int* addressComNum = &comNum;		// ��ǻ�� ������ �ּ�
static int** c = &addressComNum;			// ��ǻ�� ������ �ּ��� �ּ�
/*static int scissors = 0;
static int rock = 1;
static int* rockAddress = &rock;
static int comNum;
static int* comNumAddress = &comNum;
static int** comNumAddressAddress = &comNumAddress;
static int* a = &scissors;
static int** b = &rockAddress;
static int*** c = &comNumAddressAddress;*/

void Function(int* a, int** b, int*** c) {
	srand(time(NULL));
	while (true) {
		****&c = rand() % 3;

		cout << "���������� ������ �����մϴ�." << endl;
		if (****&c == 0) {
			cout << "��ǻ�Ͱ� ������ �´�." << endl;
		}
		else if (****&c == 1) {
			cout << "��ǻ�Ͱ� ������ �´�." << endl;
		}
		else if (****&c == 2) {
			cout << "��ǻ�Ͱ� ���� �´�." << endl;
		}
		int player;
		cout << "���������� �� �ϳ��� ���ʽÿ�(0 : ����, 1 : ����, 2 : ��, �� ���� ���� : ���� ����) : ";
		cin >> player;
		Sleep(1000);

		if (player > 2 || player < 0) {
			break;
		}
		else {
			if (player == ****&c) {
				cout << "�����ϴ�." << endl;
			}
			else if (player == **&a) {
				if (****&c == ***&b) {
					cout << "�����ϴ�." << endl;
				}
				else {
					cout << "�̰���ϴ�" << endl;
				}
			}
			else if(player == ***&b){
				if (****&c == **&a) {
					cout << "�̰���ϴ�." << endl;
				}
				else {
					cout << "�����ϴ�." << endl;
				}
			}
			else {
				if (****&c == **&a) {
					cout << "�����ϴ�." << endl;
				}
				else {
					cout << "�̰���ϴ�." << endl;
				}
			}
		}
	}
}

void main() {
	Function(&a, &b, &c);		// ������ �ּ�, ������ �ּ��� �ּ�, ��ǻ�� ������ �ּ��� �ּ��� �ּҸ� �Ű�������
}