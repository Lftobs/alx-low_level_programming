#include "main.h"

/**
 * cap_string - Entry
 * @str: IFC
 * Return: 0
 */
char *cap_string(char *str)
{
	int i = 0, j;
	char k[] = " \t\n,;.!?\"(){}";

	do {
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			if (i == 0)
				*(str + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (k[j] == *(str + i - 1))
						*(str + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	} while (*(str + i));
	return (str);
}
