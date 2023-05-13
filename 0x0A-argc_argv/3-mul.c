#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: integer
 * @argv: string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
