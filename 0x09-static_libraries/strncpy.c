#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncpy - strncpy
 * @dest: dest
 * @src: src
 * @n: number
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

