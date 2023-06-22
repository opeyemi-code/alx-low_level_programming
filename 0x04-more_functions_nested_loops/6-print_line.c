#include "main.h"

/**
 * print_line - Entry point
 * @n: receives an interger
 * prints out line equal to the amount interger passed to the function
 * Return: line(s)
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

