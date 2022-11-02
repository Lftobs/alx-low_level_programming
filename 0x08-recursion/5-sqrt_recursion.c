#include "main.h"

int _natural_sqrt(int n, int i);

/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 * @n: number to calculate the natural square root
 *
 * Return: √n
 */
int _sqrt_recursion(int n)
{
	return (_natural_sqrt(n, 1));
}

/**
 * _natural_sqrt - Function that calculates natural square root
 * @n: number to calculate the square root
 * @i: iterate no
 *
 * Return: √n
 */
int _natural_sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_natural_sqrt(n, i + 1));
}
