#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - memset
 * @s: string
 * @b: boolean
 * @n: number
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}

