#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: points to a string
 * this program prints a string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	printf("%c", *s);
	_puts_recursion(s + 1);
}
