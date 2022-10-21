#include "main.h"
/**
 * print_jber -Entry
 * @n: IFC
 *Return: 0
 */
void print_jber(int n)
{
	unsigned int j = n;

	if (n < 0)
	{
		_putchar('-');
		j = -j;
	}

	if ((j / 10) > 0)
		print_jber(j / 10);

	_putchar((j % 10) + '0');
}
