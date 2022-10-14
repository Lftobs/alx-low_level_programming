#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int n = 0;
	char a = 'a';

	while (n < 10)
	{
		putchar((n % 10) + '0');
		n++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
