#include "main.h"
#include <stdlib.h>

int ws_len(char *str);
int count_ws(char *str);
char **strtow(char *str);

/**
 * strtow - Entry (function that splits a string into words
 * @str:  string
 * Return: 0
 */
char **strtow(char *str)
{
	char **output;
	int ws, i = 0, lt, w, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	ws = count_ws(str);
	if (ws == 0)
		return (NULL);

	output = malloc(sizeof(char *) * (ws + 1));
	if (output == NULL)
		return (NULL);

	for (w = 0; w < ws; w++)
	{
		while (str[i] == ' ')
			i++;

		lt = ws_len(str + i);

		output[w] = malloc(sizeof(char) * (lt + 1));

		if (output[w] == NULL)
		{
			for (; w >= 0; w--)
				free(output[w]);

			free(output);
			return (NULL);
		}

		for (l = 0; l < lt; l++)
			output[w][l] = str[i++];

		output[w][l] = '\0';
	}
	output[w] = NULL;

	return (output);
}


/**
 * ws_len - Entry
 * @str: string
 * Return: 0
 */
int ws_len(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}

	return (len);
}

/**
 * count_ws - Entry (counts the number of ws contained within a string)
 * @str: string
 * Return: no ws
 */
int count_ws(char *str)
{
	int i = 0, ws = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			ws++;
			i += ws_len(str + i);
		}
	}

	return (ws);
}
