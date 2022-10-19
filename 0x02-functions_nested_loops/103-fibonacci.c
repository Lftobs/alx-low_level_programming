#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	long j = 0,  k = 1, l;
	float i;

	do {
		l = k + j;
		if (l > 4000000)
			break;
		if (l % 2 == 0)
			i += l;
		j = k;
		k = l;
	} while (1);
	printf("%.0f\n", i);
	return (0);
}
