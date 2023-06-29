#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - Entry point
 * @dest: receives a string
 * @src: receives a string
 * @n: receives an integer
 * this program returns a concatenated string
 * Return: new string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
