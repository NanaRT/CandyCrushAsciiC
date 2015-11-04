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

int checkArrayX(int x, int cell)
{
	x = (x + 2) / cell;
	return x;
}

int checkArrayY(int y)
{
	y = (y+1) / 2;
	return y;
}

int uncheckArrayX(int x, int cell)
{
	x = x * cell - 4;
	return x;
}

int uncheckArrayY(int y)
{
	y = y * 2 - 1 ;
	return y;
}

void switchGems(int x, int y, int** arrayCell, int cell)
{
	int PosX = checkArrayX(getPosX(),cell);
	int PosY = checkArrayY(getPosY());
	x = checkArrayX(x, cell);
	y = checkArrayY(y);
	int valueXY = arrayCell[y][x];
	int valuePosXPosY = arrayCell[PosY][PosX];
	int transition = 0;

	transition = valueXY;
	valueXY = valuePosXPosY;
	valuePosXPosY = transition;
	arrayCell[y][x] = valueXY;
	arrayCell[PosY][PosX] = valuePosXPosY;
	
	int beginCellX = uncheckArrayX(x, cell);
	int beginCellY = uncheckArrayY(y);
	swipeCell(y, x,  arrayCell, beginCellX, beginCellY);

	int switchCellX = uncheckArrayX(PosX, cell);
	int switchCellY = uncheckArrayY(PosY);
	swipeCell(PosY, PosX, arrayCell, switchCellX, switchCellY);

	setPos(switchCellX+2, switchCellY);

	return;
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

void movementSelectedGem(int numberCell, int numberLines, int cell, int** arrayCell)
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
	switchGems(x,y, arrayCell, cell);
	return;
}