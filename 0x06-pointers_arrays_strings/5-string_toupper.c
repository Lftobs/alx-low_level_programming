#include "main.h"
/**
 * string_toupper - Entry
 * @string: IFC
 * Return: 0
 */
char *string_toupper(char *string)
{
	int i = 0;

	do {
		if (*(string + i) >= 'a' && *(string + i) <= 'z')
			*(string + i) -= 'a' - 'A';
		i++;
	} while (*(string + i));
	return (string);
}
