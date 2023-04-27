#include <stdio.h>
#include "main.h"

/**
 * isupper - print uppercase letter
 * @c: char to check
 *
 * Return: 1 or 0
 */

int isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
