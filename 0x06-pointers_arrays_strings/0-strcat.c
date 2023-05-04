#include "main.h"

/**
 * *_strcat - append src to dest overwritting \0
 * @src: source string
 * @dest: destination
 * Return: Always (0)
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}
