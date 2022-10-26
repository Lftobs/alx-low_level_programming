#include "main.h"

/**
 * leet - Entry
 * @s: string
 * Return: str
 */
char *leet(char *s)
{
	int i, j;
	char k[] = "aAeEoOtTlL";
	char l[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (k[j] == *(s + i))
				*(s + i) = l[j];
		}
	}
	return (s);
}
