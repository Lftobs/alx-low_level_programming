#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Entry
 * @ptr: ifc
 * @old_size: ifc
 * @new_size: ifc
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *i;
	char *j, *k;
	unsigned int l;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		i = malloc(new_size);

		if (i == NULL)
			return (NULL);

		return (i);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	j = ptr;
	i = malloc(sizeof(*ptrj) * new_size);

	if (i == NULL)
	{
		free(ptr);
		return (NULL);
	}

	k = i;

	for (l = 0; l < old_size && l < new_size; l++)
		k[l] = *j++;

	free(ptr);
	return (i);
}
