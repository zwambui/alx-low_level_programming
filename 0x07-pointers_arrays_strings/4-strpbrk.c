#include "main.h"
#define NULL 0

/**
 * _strpbrk - locates first occurrence in s of any bytes in accept
 * @s: string
 * @accept: target match
 * Return: pointer to string
 */

char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (s[x] != '\0')
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				s = &s[x];

				return (s);
			}
		}
		x++;
	}
	return (NULL);
}
