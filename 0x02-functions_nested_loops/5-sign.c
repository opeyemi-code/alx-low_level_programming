#include "main.h"
/**
 * print_sign - Entry point
 * this program prints the sign of a number
 * @n: it takes an integer as parameter
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
