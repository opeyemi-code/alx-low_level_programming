#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion -  Entry point
 * @s: points to a string
 * this program returns a reversed string
 * Return: reversed string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	printf("%c", *s);
}
