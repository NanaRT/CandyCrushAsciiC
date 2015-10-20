
void generateGrid(int length, int height, int cell)
{
	topLane(length, cell);

	for (int i = 1; i < height; i++)
	{
		jungle(length, cell);
		midLane(length, cell);
	}
	jungle(length, cell);
	botLane(length, cell);
}