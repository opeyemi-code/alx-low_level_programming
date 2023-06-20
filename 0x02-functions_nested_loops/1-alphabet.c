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
/**
 * main - Entry point
 * this function calss the print_alphabet function
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}
