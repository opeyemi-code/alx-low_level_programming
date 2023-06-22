#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - Entry point
 * @c: receives a character as an argument
 * checks for upercase character
 * Return: either 1 or 0
 */

int _isupper(int c)
{
	if (isupper(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
