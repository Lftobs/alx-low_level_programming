#include <stdio.h>
/**
 * main - entry
 * @argc: ifc
 * @argv: ifc
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
