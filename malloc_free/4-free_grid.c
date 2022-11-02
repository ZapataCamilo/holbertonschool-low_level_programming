#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* free_grid - Is the funtion that is call
*@grid: Is the length of malloc
*@height: Is the char that I print
*
*  Return: Always 0.
*/
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
