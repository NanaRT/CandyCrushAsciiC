#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int number() 
{
	int nombre_aleatoire = 0;
	nombre_aleatoire = rand() % (7 - 1) + 1;
	return nombre_aleatoire;
}

int arrayCells(int lengthArray)
{
	int arrayOfCells[1] = ("%d", number());

	for (int i = 2; i = lengthArray; i++)
	{
		arrayOfCells[i] += ("%d", number());
	}
}