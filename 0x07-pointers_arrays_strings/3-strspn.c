#include "main.h"

/**
 * _strspn - Entry
 * @s: initial
 * @accept: accepted bytes
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, c;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		c = 1;
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
			{
				c = 0;
				break;
			}
		}
		if (c == 1)
			break;
	}
	return (a);
}
