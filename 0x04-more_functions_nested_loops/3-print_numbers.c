#include "main.h"

/**
 * print_numbers - Entry point
 * no parameter
 * returns the numbers, from zero to nine
 * Return: numbers (Success)
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
