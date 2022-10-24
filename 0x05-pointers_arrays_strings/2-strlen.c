#include "main.h"
/**
 * _strlen - Entry (len of string)
 * @s: IFC
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
