#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 * @n: recives an interger as argument
 * Return: Always 0 (Success)
 */

int print_to_98(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i == 0)
		{
			printf("%d", i);
		}
		else
		{
			printf(", %d", i);
		}

	}
	printf("\n");
	return (0);
}
