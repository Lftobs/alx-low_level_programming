#include "main.h"
/**
 * print_sign - Entry
 * @n: IFC
 * Return: (+/-) 1 and 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		-putchar('+');
		return (1);
	}
}
