#include "main.h"

/**
 * print_line - prints a straight line
 * @n: times _ is printed
 *
 * Return: Always (0)
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
