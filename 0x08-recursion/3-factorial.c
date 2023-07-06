#include <stdio.h>
#include "main.h"

/**
 * factorial - Entry point
 * @n: integer
 * this program prints the factorial of any number
 * Return: integer
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
