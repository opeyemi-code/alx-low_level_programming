#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - Entry point
 * @dest: represents a string
 * @src: represents a string
 * this function returns a concatenated string
 * Return: Concatenated string
 */

char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
