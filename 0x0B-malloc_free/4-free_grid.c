#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height d of grid
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int y;

	for (y = 0; y < height; y++)
	{
		free(grid[y]);
	}
	free(grid);
}
