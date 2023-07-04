#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - Entry point
 * @s: a pointer that points to a null terminated string
 * @accept: a pointer pointing to a string
 * Return: integer
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
