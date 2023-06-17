#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * This program ouputs the last digit of a random number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lstDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstDigit = n % 10;
	/* your code goes there */
	if (lstDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lstDigit);
	}
	else if (lstDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lstDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstDigit);
	}
	return (0);
}
