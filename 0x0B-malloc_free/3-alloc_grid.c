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
	int **maa;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	if (maa == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		maa[x] = malloc(sizeof(int) * width);

		if (maa[x] == NULL)
		{
			for (; x >= 0; x--)
				free(maa[x]);

			free(maa);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			maa[x][y] = 0;
	}

	return (maa);
}
