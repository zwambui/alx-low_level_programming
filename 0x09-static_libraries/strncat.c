#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - strncat
 * @dest: dest
 * @src: src
 * @n: number
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

