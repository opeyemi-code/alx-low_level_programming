#include "main.h"
/**
 * print_alphabet - Entry point
 * this programme prints out alphabet in lowercase
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
