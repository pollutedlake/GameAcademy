/*
과제 1. 게임 평가 평균값 구하기

- 항목은 6개

- 게임 평가 : 캐릭터 배경 퀘스트 아이템 과금 레이드 (기타 등등)

- 조건  : 1차원 배열로 값을 정한 뒤 평균값을 구해서 출력을 시킨다.
ㄴ 1. 값을 입력하는 버전
ㄴ 2. 값을 입력하는 버전 X

*/
#include "06_과제1.h"

namespace AVERAGE
{
	void averageInputValue() {
		cout << "값을 입력 받아 게임 평가를 시작합니다.\n총 6개의 항목에 대해 점수를 매겨주세요(0 ~ 10)\n";
		int avaluationValue[6];
		float sum = .0f;
		string item[6] = { "캐릭터", "배경", "퀘스트", "아이템", "과금", "레이드" };
		int sizeAvaulationValue = sizeof(avaluationValue) / sizeof(avaluationValue[0]);
		for (int i = 0; i < sizeAvaulationValue; i++) {
			cout << item[i] << " : ";
			cin >> avaluationValue[i];
			sum += avaluationValue[i];
		}
		cout << "이 게임에 대한 당신의 평가의 평균 = " << sum / sizeAvaulationValue << endl;
	}

	void averageNotInputValue() {
		cout << "값을 입력받지 않고 게임 평가를 시작합니다.\n";
		int avaluationValue[6] = { 0, 1, 2, 3, 4, 5 };
		float sum = .0f;
		string item[6] = { "캐릭터", "배경", "퀘스트", "아이템", "과금", "레이드" };
		int sizeAvaulationValue = sizeof(avaluationValue) / sizeof(avaluationValue[0]);
		for (int i = 0; i < sizeAvaulationValue; i++) {
			cout << item[i] << ":" << avaluationValue[i] << endl;
			sum += avaluationValue[i];
		}
		cout << "이 게임에 대한 당신의 평가의 평균 = " << sum / sizeAvaulationValue << endl;
	}
}