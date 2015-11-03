#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int number() 
{
	int nombre_aleatoire = 0;
	nombre_aleatoire = rand() % (7 - 1) + 1;
	return nombre_aleatoire;
}

int** arrayCells(int numberCell, int numberLines)
{
	int** arrayOfCells = (int**)malloc(numberLines*sizeof(int));

	for (int i = 1; i <= numberLines; i++)
	{
		arrayOfCells[i] = (int*)malloc(numberCell*sizeof(int));
		for (int j = 1; j <= numberCell; j++)
		{
			arrayOfCells[i][j] = number();
		}
	}
	return arrayOfCells;
}

int getNumber(int line, int cell, int** arrayCells)
{
	return arrayCells[line][cell];
}