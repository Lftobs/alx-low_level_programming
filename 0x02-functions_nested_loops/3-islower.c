#include "main.h"
/**
 * _islower - Entry
 *@c: input from checker
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
