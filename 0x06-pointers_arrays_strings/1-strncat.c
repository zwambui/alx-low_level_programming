#include <stdio.h>
#include "main.h"

/**
 * _strncat - concantenates two strings
 * @dest: destination pointer
 * @src: source pointer
 * @n: bytes to concantanate
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}
