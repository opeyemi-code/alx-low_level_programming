#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * string_toupper -Entry point
 * @str: receives a string
 * this program converts a string to uppercase
 * Return: uppercase string
 */

char *string_toupper(char *str)
{
	int str_length = strlen(str);
	int i;

	for (i = 0; i < str_length; i++)
	{
		if (isalpha(str[i]) == 0)
		{
			str[i] = str[i];
		}
		else
		{
			if (islower(str[i]) > 0)
			{
				str[i] = toupper(str[i]);
			}
			else
			{
				str[i] = str[i];
			}
		}
	}
	return (str);
}
