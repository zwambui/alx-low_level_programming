#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: length of string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s <= 1)
	{
		return (1);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
