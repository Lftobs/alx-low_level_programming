#include "main.h"
/**
 * puts_half - Entry
 * @str: IFC
 * Return: 0
 */
void puts_half(char *str)
{
	int j, i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
			break;
		i++;
	}

	if (i  % 2 == 1)
		j = i / 2;
	else
		j = (i - 1) / 2;

	for (j++; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
