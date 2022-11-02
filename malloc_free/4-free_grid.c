#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*
 * free_grid - The funtion
 *@grid: The pointer
 *@height: The height
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free (grid);
}
