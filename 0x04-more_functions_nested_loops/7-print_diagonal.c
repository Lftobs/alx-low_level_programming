#include "main.h"
/**
 * print_diagonal - Entry
 * @n: IFC
 * Return: 0
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		do {
			int j;

			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			i++;
			_putchar('\n');
		} while (i < n);
	}
}
