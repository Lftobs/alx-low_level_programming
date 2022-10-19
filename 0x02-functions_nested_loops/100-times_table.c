#include "main.h"
/**
 * print_times_table - Entry
 * @n: IFC
 */
void print_times_table(int n)
{
	int num, i, j;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (i = 1; i <= n; i++)
			{
				_putchar(',');
				_putchar(' ');
				j = num * i;
				if (j <= 99)
					_putchar(' ');
				if (j <= 9)
					_putchar(' ');
				if (j >= 100)
				{
					_putchar((j / 100) + '0');
					_putchar((j / 10) % 10 + '0');
				}
				else if (j <= 99 && j >= 10)
				{
					_putchar((j / 10) + '0');
				}
				_putchar((j % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
