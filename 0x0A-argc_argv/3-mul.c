#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: an interger
 * @argv: array of pointer to string
 *
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d\n", result);
	return (0);
}

