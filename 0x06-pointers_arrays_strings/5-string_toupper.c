#include "main.h"

/**
 * string_toupper - change string from lowercase to uppercase
 * @a: string pointer
 * Return: uppercase string pointer
 */

char *string_toupper(char *a)
{
	int str;

	str = 0;
	while (a[str] != '\0')
	{
		if (a[str] >= 97 && a[str] <= 122)
		{
			a[str] = a[str] - 32;
		}
		str++;
	}
	return (a);
}
