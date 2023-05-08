#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints a chessboard
 * @a: two dimensional array
 * Return: (0)
 */

void print_chessboard(char (*a)[8])
{
	int r, c;

	r = c = 0;

	while (r < 8)
	{
		c = 0;
		while (c < 8)
		{
			_putchar(a[r][c]);
				c++;
		}
		_putchar('\n');
		r++;
	}
}
