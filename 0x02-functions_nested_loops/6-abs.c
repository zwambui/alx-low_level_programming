#include "main.h"
#include <stdio.h>

/**
 * _abs -prints the  absolute value of an integer
 * @c: parameter
 *
 * Return: int
 */

int _abs(int c)
{
	if (c > 0)
	{
		c = +c;
	}
	else
	{
		c = -c;
	}
	return (c);
}
