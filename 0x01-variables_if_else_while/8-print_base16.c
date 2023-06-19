#include <stdio.h>
/**
 * main - Entry point
 * this program prints all the number of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;

	while (i < 103)
	{
		if (i < 58 || i >= 97)
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
