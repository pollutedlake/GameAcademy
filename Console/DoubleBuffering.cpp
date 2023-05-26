#include "DoubleBuffering.h"
#include<iostream>
using namespace std;

DoubleBuffering::DoubleBuffering()
{
	g_nScreenIndex = 0;
}

DoubleBuffering::~DoubleBuffering()
{

}

void DoubleBuffering::screenInit()
{
	CONSOLE_CURSOR_INFO cci;

	g_hScreen[0] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	g_hScreen[1] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);

	cci.dwSize = 1;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(g_hScreen[0], &cci);
	SetConsoleCursorInfo(g_hScreen[1], &cci);
}

void DoubleBuffering::screenFlipping()
{
	SetConsoleActiveScreenBuffer(g_hScreen[g_nScreenIndex]);
	g_nScreenIndex = !g_nScreenIndex;
}

void DoubleBuffering::screenClear()
{
	COORD Coor = { 0, 0 };
	DWORD dw;
	FillConsoleOutputCharacter(g_hScreen[g_nScreenIndex], ' ', 100 * 100, Coor, &dw);
}

void DoubleBuffering::screenRelease()
{
	CloseHandle(g_hScreen[0]);
	CloseHandle(g_hScreen[1]);
}

void DoubleBuffering::screenLine(int x, int y, int color[SCREENWIDTH])
{
	DWORD dw;
	for (int i = 0; i < SCREENWIDTH; i++)
	{
		COORD CursorPosition = { x + i * 2, y };
		setColor(color[i], color[i]);
		SetConsoleCursorPosition(g_hScreen[g_nScreenIndex], CursorPosition);
		WriteFile(g_hScreen[g_nScreenIndex], "бс", strlen("бс"), &dw, NULL);
	}
}

void DoubleBuffering::screenPrint()
{
	for (int i = 0; i < SCREENHEIGHT; i++)
	{
		screenLine(0, i,dotColors[i]);
	}
}

void DoubleBuffering::setColor(int font, int background)
{
	int color = font + background * 16;
	SetConsoleTextAttribute(g_hScreen[g_nScreenIndex], color);
}