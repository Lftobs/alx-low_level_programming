#include "main.h"
#include <stdlib.h>

/**
 * array_range - Entryy
 * @min: ifc
 * @max: ifc
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *final, i, j;

	if (min > max)
		return (NULL);

	j = max - min + 1;

	final = malloc(sizeof(int) * j);

	if (final == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		final[i] = min++;

	return (final);
}
