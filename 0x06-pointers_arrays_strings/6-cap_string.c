#include "main.h"

/**
 * cap_string - capitalize first letters of a string
 * @s: string pointer
 * Return: pointer to s
 */

char *cap_string(char *s)
{
	int cap;

	cap = 0;
	while (s[cap] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[cap] == ' ' || s[cap] == '\t' || s[cap] == '\n'
		|| s[cap] == ',' || s[cap] == ';' || s[cap] == '.'
		|| s[cap] == '!' || s[cap] == '?' || s[cap] == '"'
		|| s[cap] == '(' || s[cap] == ')' || s[cap] == '{'
		|| s[cap] == '}')
		{
			if (s[cap + 1] >= 97 && s[cap + 1] <= 122)
			{
				s[cap + 1] = s[cap + 1] - 32;
			}
		}
		cap++;
	}
	return (s);
}
