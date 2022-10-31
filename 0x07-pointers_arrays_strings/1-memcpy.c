#include "main.h"
/**
 * _memcpy - Entry
 * @dest: destination memory
 * @src: source memory
 * @n: bytes
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	do {
		*(dest + a) = *(src + a);
		a++;
	} while (a < n);
	return (dest);
}
