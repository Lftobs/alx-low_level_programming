#include "main.h"
#include <stdlib.h>
/**
 * create_array - Entry(creates an array of chars)
 * @size: size of the array
 * @c: ifc
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(c) * size);

	if (a == NULL)
		return (NULL);

	do {
		a[i] = c;
	} while (i < size)

		return (a);
}
