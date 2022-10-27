#include "main.h"

/**
 * rot13 - Entry
 * @str: string
 * Return:  str
 */
char *rot13(char *str)
{
	int i, j;
	char k[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char l[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(str + i))
			{
				*(str + i) = b[j];
				break;
			}
		}
	}
	return (str);
}
