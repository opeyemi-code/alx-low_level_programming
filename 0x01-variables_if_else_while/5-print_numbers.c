#include <stdio.h>

/**
 * main - Entry point
 * Prints out all single digit numbes from base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
