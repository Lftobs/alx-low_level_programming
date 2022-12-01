#include "main.h"
#include <stdio.h>

/**
 * flip_bits - func that flips bits to convert one number to another number
 * @n: 1st no
 * @m: 2nd no
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif;
	int count;

	dif = n ^ m;
	count = 0;

	while (dif)
	{
		count++;
		dif &= (dif - 1);
	}

	return (count);
}
