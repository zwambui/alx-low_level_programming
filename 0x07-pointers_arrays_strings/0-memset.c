#include "main.h"

/**
 * _memset - fills first n bytes of memory pointed to by s with constant byte b
 * @n: bytes of memory
 * @s: input pointer
 * @b: constant byte
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n; /*accept positive sizes */


	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			s[i] = b;
		}

	}
	return (s);
}
