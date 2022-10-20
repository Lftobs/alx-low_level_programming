#include "main.h"
/**
 *  _isdigit - Entry
 * @c: IFC
 * Return: 0 && 1
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}
