#include "main.h"

/**
 * leet - Entry
 * @str: string
 * Return: str
 */
char *leet(char *str)
{
	int i = 0;
	char k[] = "aAeEoOtTlL";
	char l[] = "4433007711";

	do {
		for (int j = 0; j <= 9; j++)
		{
			if (k[j] == *(str + i))
				*(str + i) = l[j];
		}
		i++;
	} while (*(str + i));

	return (str);
}
