#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function to be executed
 * @size: size of the array
 * @action: pointer to the function in use
 * @array: pointer parameter of type int
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;

	while (size > 0)
	{
		(*action)(*array);
		array++;
		size--;
	}

}
