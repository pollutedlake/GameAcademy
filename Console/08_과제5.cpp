/*
�������� 1. ���ڿ� ���ڿ� ����

- ���� �ð� : 5��

<���� ����>
- C++ ���� Ǯ��� �ϰ� ��ĭ�� �˸°� ä�� �����ÿ�.

- C��Ÿ�� ���̺귯���� STDL�� ��Ÿ ���̺귯�� �Լ��� ����ϸ� �ȵ˴ϴ�.

- Ư�� STL String�� ����ҽ� �ٷ� Ż�� ó���Ǵ� ���ǹٶ��ϴ�.

- �׸��� �ۼ��� ����� ���ؼ� �����ϰ� �� �׷��� �ߴ��� �ּ��� �߰��Ͻÿ�.

����. �־��� ���ڿ��� �ܾ� ������ ������ ������ ����ϼ���.
<��>
�Է°� : "Hello World this is Pearl Abyss"
��ȯ�� : "Pearl Abyss is this World Hello"

<����>
�Է� ���ڿ��� �յڿ� ������ ���ٰ� �����մϴ�.
��� �ܾ�� ���� �� ĭ���� ���еȴٰ� �����մϴ�.

void ReverseWorld(char* output, int outputArrsySize, const char* input)
{
		�̰��� ä�� �����ÿ�.
}
*/
#include"08_����5.h"

namespace ASSIGNMENT_5
{
	void ReverseWorld(char* output, int outputArrsySize, const char* input)
	{
		char word[10][500];
		int len = 0;
		int wordLen = 0;
		outputArrsySize = 0;
		while (true)
		{
			if (input[len] == '\0') {
				break;
			}
			if (input[len] >= 'A')
			{
				word[outputArrsySize][wordLen + 1] = '\0';
				outputArrsySize++;
				wordLen = 0;
			}
			//cout << input[len] << endl;
			word[outputArrsySize][wordLen] = input[len];
			wordLen++;
			len++;
		}
		int outputLen = 0;
		for (int i = outputArrsySize; i  >= 0; i--)
		{
			
			for (int j = 0; j < 500; j++)
			{
				if (word[i][j] == '\0')
				{
					break;
				}
				output[outputLen] = word[i][j];
				outputLen++;
			}
			output[outputLen] = ' ';
			outputLen++;
		}
		cout << output << endl;
	}
}