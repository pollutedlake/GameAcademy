#pragma once
/*
string ��� ����
����2. ���ڿ� ���� (���ڵ�)

- ���ڸ� �Է� �޾� �Է¹��� ���ڸ� �Ųٷ� ����Ѵ�.
�� EX) ABCD -> DCBA

- �ִ� �״�θ� ��������� ¦���� �ִ� ���ڸ� �Ųٷ� ����Ѵ�.
�� EX) ASDFG -> AFDSG

- �ֹι�ȣ�� �Է��ϰ� -�� ���ŵ� �ֹι�ȣ�� ����Ѵ�.
�� EX) 1234567-12345678 -> 123456712345678

���� ����. ����� ���� �ڷ���

- ��Ʈ�� ����´�.

- ������ �� ������ �´�.
*/
#include<iostream>
using namespace std;

namespace ASSIGNMENT_2
{
	void backwardsString();

	void evenBackwardsString();

	void noHyphen();
}