#include <stdio.h>
/**
 * main - Entry
 * Description: program to print no using putchar
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
