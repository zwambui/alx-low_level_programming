#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints 2nd half of str
 * @str: string parameter
 * Return: Always (0)
 */

void puts_half(char *str)
{
	int count = 0, i;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			break;
		}
		count++;
	}

	if (count % 2 == 1)
	{
		i = count / 2;
	}
	else
	{
		i = (count - 1) / 2;
	}

	for (i++; i < count; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
