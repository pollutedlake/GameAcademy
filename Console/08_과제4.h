#pragma once
#include <iostream>
#include <random>
#include <Windows.h>
using namespace std;

namespace ASSIGNMENT_4
{
	void playBinggo();

	void printBoard(int board[25]);

	int checkBinggo(int board[25], int index[25], int n);

	int AIChoiceEasy(int board[25]);

	int AIChoiceHard(int board[25], int binggoN);
}