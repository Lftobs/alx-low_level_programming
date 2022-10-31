#include "main.h"
/**
 * _memset - Entry
 * @s: mea
 * @b: constant
 * @n: bytes
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	do {
		*(s + a) = b;
		a++;
	} while (a < n);
	return (s);
}
