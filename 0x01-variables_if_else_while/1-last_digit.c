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
	int n, last_no;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_no = n % 10;
	if (last_no > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last_no);
	if (last_no == 0)
		printf("Last digit of %i is %i and is 0\n", n, last_no);
	if (last_no < 6 && last_no != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_no);
	/* your code goes there */
	return (0);
}
