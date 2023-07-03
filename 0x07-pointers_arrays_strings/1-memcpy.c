#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: destination
 * @src: source to copy from
 * @n: number of bytes
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
