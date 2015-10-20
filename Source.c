#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <time.h>


void main()
{
	int ch;
	int numberCell = 10;
	int numberLines = 10;
	int widthCell = 5;

	arrayCells(numberCell*numberLines);

	/*Number of cells, number of lines, width of cells*/
	generateGrid(numberCell, numberLines, widthCell);
	setPos(3, 1);


	while ((ch = _getch()) != 27) /* 27 = Esc key */
	{
		movement(widthCell);
	}


	printf("ESCAPE %d\n", ch);

}