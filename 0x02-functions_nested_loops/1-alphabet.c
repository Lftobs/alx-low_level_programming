#include "main.h"
/**
 * main - Entry
 * Return: 0
 */
void print_alphabet(void)
{
	int ab = 'a';

	while (ab <= 'z')
	{
		_putchar(ab);
		ab++;
	}
	_putchar('\n');
}
