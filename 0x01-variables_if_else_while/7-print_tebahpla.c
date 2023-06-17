#include <stdio.h>
/**
 * main - Entry point
 * this program prints lowercase alphabet in reverse other
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 26;

	while (i >= 0)
	{
		putchar(alphabet[i]);
		i--;
	}
	printf("\n");
	return (0);
}
