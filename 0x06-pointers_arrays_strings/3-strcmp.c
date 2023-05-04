#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string pointer
 * @s2: second string pointer
 * Return: 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int x, cmp;

	x = 0;
	while (s1[x] == s2[x] && s1[x] != '\0')
	{
		x++;
	}

	cmp = s1[x] - s2[x];
	return (cmp);
}
