#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Entry point
 * @a: receives an array of integer
 * @n: the number elements in the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = (n - 1); i >= 0; i--)
	{
		if (i < (n - 1))
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
