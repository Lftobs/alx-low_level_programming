#include "main.h"
/**
 * swap_int - swap two intergers
 * @a: IFC (int 1)
 * @b: IFC (int 2)
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = *i;
}
