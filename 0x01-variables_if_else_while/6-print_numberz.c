#include <stdio.h>
/**
 * main - Entry point
 * this program prints out all single digit of base 10 using putchar function
 * Return: Always 0 (Success)
 */

int main(void)
{
	char stringOfNumbers[] = "0123456789";
	int i = 0;

	while (i < 10)
	{
		putchar(stringOfNumbers[i]);
		i++;
	}
	printf("\n");
	return (0);
}
