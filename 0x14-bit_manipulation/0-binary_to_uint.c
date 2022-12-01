#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint -func to convert a binary number to an unsigned int
 * @b: string
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (j = 1, i = 0, len--; len >= 0; len--, j *= 2)
	{
		if (b[len] == '1')
			i += j;
	}

	return (i);
}
