#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: receives an integer
 * Return: returns a diagonal line equivalent to n
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int j = i;

			while (j > 0)
			{
				_putchar(' ');
				j--;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
