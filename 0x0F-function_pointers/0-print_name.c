#include "function_pointers.h"

/**
 * print_name -Entry (function that prints a name)
 * @name: name
 * @f: void function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
