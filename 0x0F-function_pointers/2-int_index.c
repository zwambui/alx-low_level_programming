#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - returns the index of the first element
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * @array: pointer parameter of type int
 *
 * Return: returns -1 for no element match and when size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);
	while (size-- > 0)
	{
		i++;
		if (cmp(*array) != 0)
		{
			return (i - 1);
		}
		array++;
	}
	return (-1);
}
