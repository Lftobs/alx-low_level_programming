#include "main.h"
/**
 * print_last_digit - Entry
 * @n: IFC
 * Return: 0
 */
int print_last_digit(int n)
{
	int last_d = n % 10;

	if (last_d < 0)
		last_d *= -1;
	_putchar(last_d + '0');
	return (last_d);
}
