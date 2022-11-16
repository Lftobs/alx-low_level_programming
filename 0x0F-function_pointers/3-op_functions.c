#include "3-calc.h"

/**
 * op_add - func thats adds two numbers
 * @a: no 1
 * @b: no 2
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - func that subctracts two numbers.
 * @a: no 1
 * @b: no 2
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - func that multiplies two numbers
 * @a: no 1
 * @b: no 2
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -  func that divides two numbers
 * @a: no 2
 * @b: ni 2
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Entry
 * @a: no 1
 * @b: no 2
 *
 * Return: remainder of the division.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
