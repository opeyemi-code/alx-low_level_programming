#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: points to a 8x8 dimensional array
 * this program prints out all the element in the array
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
