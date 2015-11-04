#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

void fullCell(int line, int cell, int** arrayCells)
{
	empty();
	gemColor(getNumber(line, cell, arrayCells));
	empty();
}

void swipeCell(int line, int cell, int** arrayCells, int PosX, int PosY)
{
	setPos(PosX, PosY);
	empty();
	gemColor(getNumber(line, cell, arrayCells));
	empty();
}
