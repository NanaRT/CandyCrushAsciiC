// Copyright (c) 2010 - Harald Wolfsgruber
// All rights reserved.
//
// Name:                AWin32Console
// Version:             1.1
// Description:         ANSI escape code 
// License:             BSD3
// License-file:        LICENSE
// Author:              Harald Wolfsgruber

#include <windows.h>

void setAttr(int a)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, a);
	return;
}

void setPos(int x, int y)
{
	COORD a;
	a.X = x;
	a.Y = y;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hStdOut, a);
	return;
}

void setCls()
{
	COORD a = { 0, 0 };
	DWORD c;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO b;
	GetConsoleScreenBufferInfo(hStdOut, &b);
	DWORD hSize = b.dwSize.X*b.dwSize.Y;
	FillConsoleOutputCharacter(hStdOut, (TCHAR) ' ', hSize, a, &c);
	FillConsoleOutputAttribute(hStdOut, b.wAttributes, hSize, a, &c);
	return;
}

void setScroll(int xTO, int yTO, int lR, int tR, int rR, int bR)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO e;
	GetConsoleScreenBufferInfo(hStdOut, &e);
	COORD a;
	a.X = xTO;
	a.Y = yTO;
	SMALL_RECT b = { lR,tR,rR,bR };
	SMALL_RECT *bP = &b;
	CHAR_INFO d = { (CHAR) ' ', e.wAttributes };
	CHAR_INFO *dP = &d;
	ScrollConsoleScreenBuffer(hStdOut, bP, NULL, a, dP);
	return;
}

int getPosX()
{
	CONSOLE_SCREEN_BUFFER_INFO a;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hStdOut, &a);
	return a.dwCursorPosition.X;
}

int getPosY()
{
	CONSOLE_SCREEN_BUFFER_INFO a;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hStdOut, &a);
	return a.dwCursorPosition.Y;
}

int getSizeX()
{
	CONSOLE_SCREEN_BUFFER_INFO a;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hStdOut, &a);
	return a.dwSize.X;
}

int getSizeY()
{
	CONSOLE_SCREEN_BUFFER_INFO a;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hStdOut, &a);
	return a.dwSize.Y;
}

int getAttr()
{
	CONSOLE_SCREEN_BUFFER_INFO a;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hStdOut, &a);
	return a.wAttributes;
}