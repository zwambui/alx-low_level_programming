#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - returns a pointer to a newly allocated space
 *
 * @s: char type
 * Return:  length of string
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	return (a);
}

/**
 * _strdup - returns pointer to duplicate string
 * @str: pointer to string
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	char *ptr;
	int size;
	int x;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	ptr = malloc(size * sizeof(char));

	x = 0;
	while (x < size)
	{
		if (ptr == NULL)
		{
		return (NULL);
		}
	ptr[x] = str[x];
	x++;
	}
	return (ptr);
}
