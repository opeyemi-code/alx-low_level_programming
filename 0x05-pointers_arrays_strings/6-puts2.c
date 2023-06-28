#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - Entry point
 * @str: receives a string
 * Return: every other character
 */

void puts2(char *str)
{
	int i;
	int strLength = strlen(str);

	for (i = 0; i < strLength; i++)
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
	}
	printf("\n");
}
