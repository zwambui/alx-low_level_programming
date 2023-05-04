#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: array pointer
 * @n: number of array elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;

	n = n - 1;
	j = 0;
	while (j <= n)
	{
		i = a[j];
		a[j++] = a[n];
		a[n--] = i;
	}
}
