#include "main.h"
/**
 * _strchr - Entry
 * @s: string
 * @c: character
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	unsigned int a = 0;

	do {
		if (*(s + a) == c)
			return (s + a);
		a++;
	} while (*(s + a) != '\0');
	if (*(s + a) == c)
		return (s + a);
	return ('\0');
}
