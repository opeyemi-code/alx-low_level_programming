#include <stdio.h>

/**
 * main - Entry point
 * @argc: an integer
 * @argv: a array of pointer to strings
 *
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
