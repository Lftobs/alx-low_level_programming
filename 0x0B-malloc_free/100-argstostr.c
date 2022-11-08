#include "main.h"
#include <stdlib.h>

/**
 * argstostr - entry
 * @ac: ifc
 * @av: ifc
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int k, i, j, l;

	if (ac == 0)
		return (NULL);

	for (k = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			k++;
		k++;
	}

	a = malloc((k + 1) * sizeof(char));

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = j = l = 0; l < k; j++, l++)
	{
		if (av[i][j] == '\0')
		{
			a[l]] = '\n';
			i++;
			l++;
			j = 0;
		}
		if (l < k - 1)
			a[l] = av[i][j];
	}
	a[l] = '\0';

	return (a);
}
