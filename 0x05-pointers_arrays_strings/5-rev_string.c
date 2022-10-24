#include "main.h"
/**
 * rev_string - Entry
 * @s: IFC
 * Return: 0
 */
void rev_string(char *s)
{
	int i, j, k = 0;
	char *l, m;

	while (k >= 0)
	{
		if (s[k] == '\0')
			break;
		k++;
	}
	l = s;

	for (i = 0; i < (k - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			m = *(l + j);
			*(l + j) = *(l + (j - 1));
			*(l + (j - 1)) = m;
		}
	}
}
