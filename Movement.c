#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <conio.h>

void movementRight(int numberCell, int cell)
{
	int x = getPosX();
	int y = getPosY();
	int totalX = numberCell*cell;
	x = x + cell;
	if (x < totalX)
	{
		setPos(x, y);
	}
}

void movementLeft(int cell)
{
	int x = getPosX();
	int y = getPosY();
	int totalX = getSizeX();
	x = x - cell;
	if (x >= 3)
	{
		setPos(x, y);
	}
}

void movementUp()
{
	int x = getPosX();
	int y = getPosY();
	y = y - 2;
	if (y >= 1)
	{
		setPos(x, y);
	}
}

void movementDown(int numberLines)
{
	int x = getPosX();
	int y = getPosY();
	int totalY = numberLines*2;
	y = y + 2;
	if (y < totalY)
	{
		setPos(x, y);
	}
}

void movement(int numberCell, int numberLines,int cell)
{
	int c = _getch();
	switch (c)
	{
	case 77:
		movementRight(numberCell, cell);
		break;
	case 75:
		movementLeft(cell);
		break;
	case 72:
		movementUp();
		break;
	case 80:
		movementDown(numberLines);
		break;
	case 27:
		printf("ESC %d\n", c);
		break;
	case 32:
		movementSelectedGem(numberCell, numberLines, cell);
		break;
	default:
		printf("");
		break;
	}
}