#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%i is negative\n", n);
	if (n == 0)
		prinft("%i is zero\n", n);
	if (n > 0)
		printf("%i is positive\n", n);
	/* your code goes there */
	return (0);
}
