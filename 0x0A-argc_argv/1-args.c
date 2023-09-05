#include <stdio.h>

/**
 * main - Entry point
 * @argc: an integer
 * @argv: an array of pointers to string
 *
 * Return: an integer
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
