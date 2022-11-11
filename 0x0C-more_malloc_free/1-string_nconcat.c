#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Entry (function that resultenates two strings)
 * @s1: string1
 * @s2: string2
 * @n: max no of bytes
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = n;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		j++;

	result = malloc(sizeof(char) * (j + 1));

	if (result == NULL)
		return (NULL);

	j = 0;

	for (i = 0; s1[i]; i++)
		result[j++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		result[j++] = s2[i];

	result[j] = '\0';

	return (result);
}
