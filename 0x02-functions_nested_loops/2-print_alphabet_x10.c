#include "main.h"
/**
 * print_alphabet_x10 - Entry
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	do {
		int a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
	while (i < 10);
}
