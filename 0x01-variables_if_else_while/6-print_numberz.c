#include <stdio.h>
/**
 * main - Entry point
 * this program prints out all single digit of base 10 using putchar function
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
