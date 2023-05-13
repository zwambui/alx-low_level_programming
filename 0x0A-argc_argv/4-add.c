#include <stdio.h>
#include <stdlib.h>

/**
 * Ints - checks if s is an integer
 * @s: string to check
 * Return: 0 or 1
 */

int Ints(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (1);
		}

		i++;
	}
	return (0);
}

/**
 * main - sum of two positive numbers
 * @argc: integer
 * @argv: string
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	while (--argc)
	{
		if (Ints(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[argc]);
	}
	printf("%i\n", sum);
	return (0);
}
