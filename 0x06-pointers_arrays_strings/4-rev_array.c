#include "main.h"
/**
 * reverse_array - Entry
 * @a: IFC
 * @n: size of array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i = 0, j, k = n - 1;

	do {
		j = *(a + i);
		*(a + i) = *(a + k);
		*(a + k) = j;
		i++;
		k--;
	} while (i < k);
}
