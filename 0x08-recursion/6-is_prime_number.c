#include "main.h"


int is_prime(int num, int div);

/**
 * is_prime_number - A function that checks if a number is prime
 * @n: input integer
 * Return: 0 or  1
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_prime(n, i));
}

/**
 * is_prime - check if num is divisible
 * @n: the number to be checked
 * @i: the result of division
 * Return: 1 -if n is divisible or 0 -if n is not divisible
 */
int is_prime(int n, int i)
{
	if (n % i == 0)
		return (0);

	if (i == n / 2)
		return (1);

	return (is_prime(n, i + 1));
}
