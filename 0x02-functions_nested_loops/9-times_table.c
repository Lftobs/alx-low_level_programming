#include "main.h"
/**
 * times_table - Entry
 * Return: 0
 */
void times_table(void)
{
	int n, no, result;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (no = 1; no <= 9; no++)
		{
			_putchar(',');
			_putchar(' ');

			result = no * n;
			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}

}
