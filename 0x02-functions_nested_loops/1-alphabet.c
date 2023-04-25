#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description - prints the alphabet, in lowercase
 *
 * Return:void
 */

void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
