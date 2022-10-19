#include "main.h"
/**
 * print_times_table - Entry
 * @n: IFC.
 */
void print_times_table(int n)
{
	int num, result, no;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (no =1; no <= n; no++)
			{
				_putchar(',');
				_putchar(' ');
				result = no * num;
				if (result <= 99)
					_putchar(' ');
				if (result <= 9)
					_putchar(' ');
				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar((result / 10) % 10 + '0');
				}
				else if (result <= 99 && result >= 10)
				{
				  _putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
