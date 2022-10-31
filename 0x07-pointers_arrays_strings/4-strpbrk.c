#include "main.h"

/**
 * _strpbrk - Entry (function that searches a string for any of a set of bytes)
 * @s: first string
 * @accept: second string
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b = 0;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		for (; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
				return (s + a);
		}
	}
	return ('\0');
}
