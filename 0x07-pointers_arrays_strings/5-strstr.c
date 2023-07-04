#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strstr - Emtry point
 * @haystack: pointer to the null terminated string
 * @needle: repesent the pointer to the null terninated substring to look for
 * Return: string
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
