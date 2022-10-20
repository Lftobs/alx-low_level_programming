#include "main.h"
/**
 * print_square - Entry
 * @size: size of square
 * Return: 0
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			int k = size - 1;

			for  (j = 0; j < k; j++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
