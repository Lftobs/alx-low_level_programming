#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
in main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar((n % 10) + '0');
		if (n == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
