#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Entry
 * @nmemb: no of elements
 * @size: size of each array
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;
	char *j;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = malloc(size * nmemb);

	if (result == NULL)
		return (NULL);

	j = result;

	for (i = 0; i < (size * nmemb); i++)
		j[i] = '\0';

	return (result);
}
