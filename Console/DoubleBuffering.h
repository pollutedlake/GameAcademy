#pragma once
#include<Windows.h>

class DoubleBuffering {
private:
	HANDLE g_hScreen[2];
	int g_nScreenIndex;
public:
	DoubleBuffering();
	~DoubleBuffering();

	void screenInit();
	void screenFlipping();
	void screenClear();
	void screenRelease();
	void ScreenPrint(int x, int y, char* string);
};

