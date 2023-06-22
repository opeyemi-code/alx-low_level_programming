#include "main.h"
#include <ctype.h>
/**
 * _isupper - Entry point
 * @c: receives an character
 * this programs checks if a chracter is a uppercase letter
 * Return: Always 0 (Success)
 */

int _isupper(char c)
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
