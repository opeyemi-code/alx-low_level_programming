#include "main.h"

/**
 * print_last_digit - Entry point
 * @num: takes in an integer as arguement
 * this program prints the last digit of any number
 * Return: Always 0 (Success)
 */

int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;
	if (last_digit >= 0)
	{
		putchar(last_digit + 48);
		return (last_digit);
	}
	else
	{
		putchar((-last_digit) + 48);
	}
	return (0);
}
