#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - Entry point
 * @str: receives a string
 * print the second half of the string
 * Return: string
 */

void puts_half(char *str)
{
	int n;
	int str_length = strlen(str);
	int i, j;

	if (str_length % 2 == 1)
	{
		n = (str_length - 1) / 2;

		for (i = n; i <= (n + n); i++)
		{
			printf("%c", str[i]);
		}
	}
	else
	{
		n = str_length / 2;

		for (j = n; j < (n + n); j++)
		{
			printf("%c", str[j]);
		}
	}
	printf("\n");
}
