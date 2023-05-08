#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination
 * @src: source
 * @n: no of bytes
 * Return: dest pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
