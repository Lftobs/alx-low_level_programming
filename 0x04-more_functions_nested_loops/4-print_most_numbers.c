#include "main.h"
/**
 * print_most_numbers - Entry
 * Return: 0
 */
void print_most_numbers(void)
{
	int i = 48;

	do {
		if ((i != 50) && (i != 52))
			_putchar(i);
		i++;
	} while (i < 58);
	_putchar('\n');
}
