#include "main.h"

/**
 * print_number - Entry
 * @n: IFC
 * Return: 0
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		_putchar('-');
		k = -k;
	}

	if ((k / 10) > 0)
		print_number(k / 10);

	_putchar((k % 10) + '0');
}
