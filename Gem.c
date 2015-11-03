#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <windows.h>

void gemHover()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;

	/* Save current attributes */
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;

	SetConsoleTextAttribute(hConsole, COMMON_LVB_REVERSE_VIDEO);
	printf("  ");

	/* Restore original attributes */
	SetConsoleTextAttribute(hConsole, saved_attributes);
}

void createGem(int color)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;

	/* Save current attributes */
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;

	SetConsoleTextAttribute(hConsole, color);
	printf("  ");

	/* Restore original attributes */
	SetConsoleTextAttribute(hConsole, saved_attributes);
}

void gemColor(int number)
{
	int color;

	switch (number)
	{
	case 1:
		//blue = 151
		color = 151;
		break;
	case 2:
		//green = 32
		color = 32;
		break;
	case 3:
		//red = 64
		color = 64;
		break;
	case 4:
		//grey = 128
		color = 128;
		break;
	case 5:
		//pink = 208
		color = 208;
		break;
	case 6:
		//yellow = 224
		color = 224;
		break;
	}
	createGem(color);
}


