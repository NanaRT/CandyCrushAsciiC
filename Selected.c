#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <conio.h>


void movementSelectedRight(int x, int y, int totalX, int cell)
{
	int posX = getPosX();
	posX = posX + cell;
	if ((posX>x+cell) || (posX>totalX))
	{
		return;
	}
	else
	{
		setPos(posX, y);
	}
}

void movementSelectedLeft(int x, int y, int cell)
{
	int posX = getPosX();
	posX = posX - cell;
	if ((posX<x - cell))
	{
		return;
	}
	else
	{
		setPos(posX, y);
	}
}

void movementSelectedUp(int x, int y)
{
	int posY = getPosY();
	posY = posY - 2;
	if ((posY<y - 2))
	{
		return;
	}
	else
	{
		setPos(x, posY);
	}
}

void movementSelectedDown(int x, int y, int totalY)
{
	int posY = getPosY();
	posY = posY + 2;
	if ((posY>y + 2) || (posY>totalY))
	{
		return;
	}
	else
	{
		setPos(x, posY);
	}
}

void  movementSelected(int x, int y, int totalX, int totalY, int cell)
{
	int c = _getch();

	switch (c)
	{
	case 77:
		movementSelectedRight(x, y, totalX, cell);
		break;
	case 75:
		movementSelectedLeft(x, y, cell);
		break;
	case 72:
		movementSelectedUp(x, y);
		break;
	case 80:
		movementSelectedDown(x, y, totalY);
		break;
	default:
		printf("");
		break;
	}
}

void movementSelectedGem(int numberCell, int numberLines, int cell)
{
	int ch;

	int x = getPosX();
	int y = getPosY();
	int totalX = numberCell*cell;
	int totalY = numberLines * 2;

	while ((ch = _getch()) != 32) /* 32 = Space bar */
	{
		movementSelected(x, y, totalX, totalY, cell);
	}
	return;
}