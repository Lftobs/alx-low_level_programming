#include "main.h"
#include <stdio.h>
/**
 * print_numbers - Entry (print 0 -9)
 * Return: 0
 */
void print_numbers(void)
{
	int i = 48;

	do {
		putchar(i);
		i++;
	} while (i < 58);
	putchar('\n');
}
