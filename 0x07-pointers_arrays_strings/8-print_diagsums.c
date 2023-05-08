#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonals
 * @a: pointer to 2D array
 * @size: matrix size
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int r, c;

	for (r = 0; r < size; r++)
	{
		c = (r * size) + r;
		sum1 += a[c];
	}

	for (r = 1; r <= size; r++)
	{
		c = (r * size) - r;
		sum2 += a[c];
	}
	printf("%d, %d\n", sum1, sum2);
}
