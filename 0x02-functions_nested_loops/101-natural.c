#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int i, sum = 0;

	do {
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
		i++;
	} while (i < 1024);
	printf("%i\n", sum);
	return (0);
}
