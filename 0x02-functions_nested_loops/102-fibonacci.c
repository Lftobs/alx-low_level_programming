#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int i;
	long j = 1, k = 2, l;

	for (i = 0; i < 50; i++)
	{
		l = k + j;
		printf("%lu", l);

		j = k;
		k = l;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
