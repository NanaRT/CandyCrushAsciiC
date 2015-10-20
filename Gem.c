#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <windows.h>

void gemBlue()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;

	/* Save current attributes */
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;

	SetConsoleTextAttribute(hConsole, 151);
	printf("  ");

	/* Restore original attributes */
	SetConsoleTextAttribute(hConsole, saved_attributes);
}

void gemGreen()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;

	/* Save current attributes */
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;

	SetConsoleTextAttribute(hConsole, 32);
	printf("  ");

	/* Restore original attributes */
	SetConsoleTextAttribute(hConsole, saved_attributes);
}

void gemRed()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;

	/* Save current attributes */
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;

	SetConsoleTextAttribute(hConsole, 64);
	printf("  ");

	/* Restore original attributes */
	SetConsoleTextAttribute(hConsole, saved_attributes);
}

void gemGrey()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;

	/* Save current attributes */
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;

	SetConsoleTextAttribute(hConsole, 128);
	printf("  ");

	/* Restore original attributes */
	SetConsoleTextAttribute(hConsole, saved_attributes);
}

void gemPink()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;

	/* Save current attributes */
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;

	SetConsoleTextAttribute(hConsole, 208);
	printf("  ");

	/* Restore original attributes */
	SetConsoleTextAttribute(hConsole, saved_attributes);
}

void gemYellow()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;

	/* Save current attributes */
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;

	SetConsoleTextAttribute(hConsole, 224);
	printf("  ");

	/* Restore original attributes */
	SetConsoleTextAttribute(hConsole, saved_attributes);
}

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

void gemColor(int number)
{
	switch (number)
	{
		case 1:
			gemBlue();
			break;
		case 2:
			gemGreen();
			break;
		case 3:
			gemRed();
			break;
		case 4:
			gemGrey();
			break;
		case 5:
			gemPink();
			break;
		case 6:
			gemYellow();
			break;
	}
}

