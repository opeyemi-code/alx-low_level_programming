#include <ctype.h>
#include "main.h"

/**
 * _isdigit - Entry point
 * @c: recieves an interger
 * checks for a digit
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	if (isdigit(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
