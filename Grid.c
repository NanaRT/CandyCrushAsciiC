
void generateGrid(int length, int height, int cell, int** arrayCells)
{
	int line;

	topLane(length, cell);

	for (line = 1; line < height; line++)
	{
		jungle(length, line, arrayCells);
		midLane(length, cell);
	}

	jungle(length, line, arrayCells);
	botLane(length, cell);
}