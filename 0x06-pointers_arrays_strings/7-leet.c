#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * leet - Entry point
 * @str: receives a string
 * this program replaces some letters in astring with numbers
 * Return: String
 */

char *leet(char *str)
{
	int str_length = strlen(str);
	int i;

	for (i = 0; i < str_length; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = '4';
		}
		else if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = '3';
		}
		else if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = '0';
		}
		else if (str[i] == 't' || str[i] == 'T')
		{
			str[i] = '7';
		}
		else if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = '1';
		}
	}
	return (str);
}
