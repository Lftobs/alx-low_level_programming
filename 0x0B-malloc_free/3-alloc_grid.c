#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width
 * @height: height
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **k;

	if (width < 1 || height < 1)
		return (NULL);

	k = malloc(height * sizeof(int *));
	if (k == NULL)
	{
		free(k);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		k[i] = malloc(width * sizeof(int));
		if (k[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(k[i]);
			free(k);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			k[i][j] = 0;

	return (k);
}
