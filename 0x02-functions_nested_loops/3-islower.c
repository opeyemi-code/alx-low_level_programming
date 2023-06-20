#include "main.h"
#include <ctype.h>
/**
 * _islower - Entry point
 * @c: an integer is passed into the parameter c
 * this program checks for lowercase character
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
