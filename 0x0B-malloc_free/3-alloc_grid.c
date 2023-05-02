#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to a 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **gri;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	gri = malloc(sizeof(int *) * height);

	if (gri == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		gri[a] = malloc(sizeof(int *) * width);

		if (gri[a] == NULL)
		{
			for (; a >= 0; a--)
				free(gri[a]);

			free(gri);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			gri[a][b] = 0;
	}

	return (gri);
}
