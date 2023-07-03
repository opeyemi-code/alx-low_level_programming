#include <stdio.h>
#include <string.h>

/**
 * _memset - Entry point
 * @s: a pointer pointing to the starting address
 * @b: the value to set the memory cells to
 * @n: the number of bytes to be set to the specific value
 * Return: new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
