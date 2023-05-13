#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: integer
 * @argv: string
 * Return: 0
 */

int main(int argc, int *argv[])
{
	(void)argv;

	printf("%i\n", argc - 1);

	return (0);

}
