/*
도전과제 1. 문자와 문자열 과제

- 제한 시간 : 5분

<주의 사항>
- C++ 언어로 풀어야 하고 빈칸을 알맞게 채워 넣으시오.

- C런타임 라이브러리나 STDL등 기타 라이브러리 함수를 사용하면 안됩니다.

- 특히 STL String을 사용할시 바로 탈락 처리되니 유의바랍니다.

- 그리고 작성한 방법에 대해서 간단하게 왜 그렇게 했는지 주석을 추가하시오.

문제. 주어진 문자열을 단어 단위로 순서를 뒤지어 출력하세요.
<예>
입력값 : "Hello World this is Pearl Abyss"
반환값 : "Pearl Abyss is this World Hello"

<조건>
입력 문자열은 앞뒤에 공백이 없다고 가정합니다.
모든 단어는 공백 한 칸으로 구분된다고 가정합니다.

void ReverseWorld(char* output, int outputArrsySize, const char* input)
{
		이곳을 채워 넣으시오.
}
*/
#include"08_과제5.h"

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