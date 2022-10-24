#iclude "main.h"
/**
 * _atoi - Entry
 * @s: IFC
 * Return: 0
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int no = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			no = (no * 10) + (*s - '0');

		else if (no > 0)
			break;

	} while (*s++);

	return (no * sign);
}
