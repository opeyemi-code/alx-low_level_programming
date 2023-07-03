#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - Entrry point
 * @s: the null terminated string
 * @c: the character to be searced for
 * Return: the char
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
