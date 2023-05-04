#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 * Return: encoded string
 */

char *rot13(char *s)
{
	int str, rot13;

	char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = 0;
	while (s[str] != '\0')
	{
		rot13 = 0;
		while (letter[rot13] != '\0')
		{
			if (s[str] == letter[rot13])
			{
				s[str] = rot[rot13];
				break;
			}
			rot13++;
		}
		str++;
	}
	return (s);
}
