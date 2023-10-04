#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 d array
 * @width: input
 * @height: input
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **aa;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	if (aa == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		aa[x] = malloc(sizeof(int) * width);

		if (aa[x] == NULL)
		{
			for (; x >= 0; x--)
				free(aa[x]);

			free(aa);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			aa[x][y] = 0;
	}

	return (aa);
}
