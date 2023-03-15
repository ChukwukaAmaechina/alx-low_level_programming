#include "main.h"
#include <stdlib.h>

/**
  * free_grid - function to free memory
  * @grid: length
  * @height: height
  *
  * Return: free grid
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

