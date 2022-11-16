#include "function_pointers.h"

/**
 * array_iterator - Entry
 * @array: array
 * @size: size of the array
 * @action: ptf
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && action)
		for (a = 0; a < size; a++)
			action(array[a]);
}
