#include <stdio.h>
/**
 * print_to_98 - Entry
 * @n : IFC
 * Return: 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
			printf("%i, ", n++);
		printf("%i\n", n);
	}
	else
	{
		while (n > 98)
			printf("%i, ", n--);
		printf("%i\n", n);
	}
}
