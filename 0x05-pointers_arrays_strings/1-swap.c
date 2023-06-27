#include <stdio.h>
#include "main.h"

/**
 * swap_int - Entry point
 * @a: receives an integer
 * @b: receives nan integer
 * swaps valvue between two varaibles
 * Return: integer
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
