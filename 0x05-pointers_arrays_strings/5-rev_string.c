#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Entry point
 * @s: receives a pointer that points to a string
 * prints a string in reverse order
 * Return: reversed string
 */

void rev_string(char *s)
{
	int str_length = strlen(s);
	int i;

	for (i = str_length - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
