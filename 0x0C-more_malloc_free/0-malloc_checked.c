#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Entry (function thats allocates new_m memory using malloc)
 * @b:  no of bytes to be allocated
 * Return: 0_ sucess
 */
void *malloc_checked(unsigned int b)
{
	void *new_m = malloc(b);

	if (new_m == NULL)
		exit(98);

	return (new_m);
}
