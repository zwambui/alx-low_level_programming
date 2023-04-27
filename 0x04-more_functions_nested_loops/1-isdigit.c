#include <stdio.h>
#include "main.h"

/**
 * _isdigit - print digit 0 through 9
 * @c: char to check
 *
 * Return: 1 or 0
 */

int _isdigit(int c);
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
