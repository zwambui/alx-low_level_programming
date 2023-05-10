#include "main.h"

/**
 * _print_rev_recursion - print reverse string
 * @s: a reverse string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return (void);
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
