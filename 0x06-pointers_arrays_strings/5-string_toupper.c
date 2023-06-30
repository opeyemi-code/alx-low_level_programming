#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * string_toupper -Entry point
 * @s: receives a string
 * this program converts a string to uppercase
 * Return: uppercase string
 */

char *string_toupper(char *s)
{
	int str_length = strlen(s);
	int i;

	for (i = 0; i < str_length; i++)
	{
		if (isalpha(s[i]) == 0)
		{
			printf("%c", s[i]);
		}
		else
		{
			printf("%c", toupper(s[i]));
		}
	}
	return ("");
}
