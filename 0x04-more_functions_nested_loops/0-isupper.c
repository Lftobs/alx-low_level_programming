#include "main.h"
/**
 * _isupper - Entry
 * @c: IFC
 * Return: 0 & 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
