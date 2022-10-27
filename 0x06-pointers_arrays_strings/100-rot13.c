#include "main.h"
/**
 * rot13 - Entry
 * @s: IFC
 * Return: 0
 */

char *rot13(char *s)
{
	int j = 0, i;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + j) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + j) == a[i])
			{
				*(s + j) = b[i];
				break;
			}
		}
		j++;
	}

	return (s);
}
