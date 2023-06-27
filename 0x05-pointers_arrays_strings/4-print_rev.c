#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Entry point
 * @s: receives a pointer that points to a string
 * this program prints a string in reverse order
 * Return: string
 */

void print_rev(char *s)
{
	int str_length = strlen(s);
	int i;

	for (i = str_length - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
