#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @c: parameter
 * Return: int
 */

int print_last_digit(int c)
{
	if (c > 0)
	{
		c = (c % 10);
	}
	else if (c < 0)
	{
		c = -(c % 10);
	}
	else
	{
		c = 0;
	}
	_putchar(c + '0');
	return (c);
}
