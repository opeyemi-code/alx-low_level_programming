#include <stdio.h>

/**
 * main - Entry point
 * this program prints all alphabet in lowercase and then in uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 122;

	while (i >= 65)
	{
		if (i > 96 || i < 91)
		{
			putchar(i);
		}
		i--;
	}
	putchar('\n');
	return (0);
}
