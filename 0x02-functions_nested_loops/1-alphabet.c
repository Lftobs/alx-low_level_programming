#include "main.h"
/**
 * print_alphabet - Entry
 * Description: program to print the alphabet
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
