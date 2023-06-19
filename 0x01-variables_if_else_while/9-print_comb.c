#include <stdio.h>
/**
 * main - Entry point
 * this program prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i == 48)
		{
			putchar(i);
		}
		else
		{
			putchar(',');
			putchar(' ');
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
