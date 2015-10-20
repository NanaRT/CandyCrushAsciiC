#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <conio.h>

void movementRight(int cell)
{
	int x = getPosX();
	int y = getPosY();
	int totalX = getSizeX();
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
	int totalY = getSizeY();
	y = y - 2;
	if (y >= 1)
	{
		setPos(x, y);
	}
}

void movementDown()
{
	int x = getPosX();
	int y = getPosY();
	int totalY = getSizeY();
	y = y + 2;
	if (y < totalY)
	{
		setPos(x, y);
	}
}

void movement(int cell)
{
	int c = _getch();
	switch (c)
	{
	case 77:
		movementRight(cell);
		break;
	case 75:
		movementLeft(cell);
		break;
	case 72:
		movementUp();
		break;
	case 80:
		movementDown();
		break;
	case 27:
		printf("ESC %d\n", c);
		break;
	default:
		printf("");
		break;
	}
}