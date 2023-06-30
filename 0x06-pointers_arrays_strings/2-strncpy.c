#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - Entry point
 * @dest: points to a string
 * @src: points to a string
 * @n: receives an integer
 * this program copies src into dest
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
