#include <stdio.h>
#include "main.h"

/**
 * set_string
 * @s: a pointer pointing to the address of another pointer
 * @to: the value to set to a char
 * this program sets the value of pointer to char
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
