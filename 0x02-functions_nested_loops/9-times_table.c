#include "main.h"
#include <stdio.h>

/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
			{
				printf("%d", i * j);
			}
			else if ((i * j) < 10)
			{
				printf(",  %d", i * j);
			}
			else
			{
				printf(", %d", i * j);
			}
		}
		printf("\n");
	}
}
