#include <stdio.h>

void lineCell(int length)
{
	for (int i = 1; i < length; i++)
	{
		simpleLine();
	}
}

void topLane(int length, int cell)
{
	cornerTopLeft();
	for (int i = 1; i < length; i++)
	{
		lineCell(cell);
		middleToBottom();
	}
	lineCell(cell);
	cornerTopRight();
	printf("\n");
}

void midLane(int length, int cell)
{
	middleToRight();
	for (int i = 1; i < length; i++)
	{
		lineCell(cell);
		middle();
	}
	lineCell(cell);
	middleToLeft();
	printf("\n");
}

void botLane(int length, int cell)
{
	cornerBottomLeft();
	for (int i = 1; i < length; i++)
	{
		lineCell(cell);
		middleToTop();
	}
	lineCell(cell);
	cornerBottomRight();
	printf("\n");
}

void jungle(int length, int cell)
{
	simpleColumn();
	for (int i = 1; i < length; i++)
	{
		fullCell(cell);
		simpleColumn();
	}
	fullCell(cell);
	simpleColumn();
	printf("\n");
}