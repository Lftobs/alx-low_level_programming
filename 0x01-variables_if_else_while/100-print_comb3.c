#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int n, a;

	for (n = '0'; n < '9'; n++)
	{
		for (a = n + 1; a <= '9'; a++)
		{
			if (a != n)
			{
				putchar(n);
				putchar(a);

				if (n == '8' && a == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
