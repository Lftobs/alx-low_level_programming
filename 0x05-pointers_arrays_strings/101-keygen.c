#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int i, j, k, s;
	char random[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char psd[60];

	srand(time(NULL));
	while (s != 2772)
	{
		i = k = s = 0;
		while ((2772 - 122) > s)
		{
			j = rand() % 62;
			psd[i] = random[j];
			s += random[j];
			i++;
		}
		while (random[k])
		{
			if (random[k] == (2772 - s))
			{
				psd[i] = random[k];
				s += random[k];
				i++;
				break;
			}
			k++;
		}
	}
	psd[i] = '\0';
	printf("%s", psd);
	return (0);
}
