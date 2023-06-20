#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Entry point
 * this function checks if a character is an alphabet
 * @c: it takes an integer as arguement
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if (isalpha(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
