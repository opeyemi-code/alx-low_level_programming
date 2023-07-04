#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: a pointer to a null terminated string
 * @accept: a set of characters to search for
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
