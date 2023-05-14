#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/**
 * min_coins - change for an amount of money
 * argc: integer
 * arcv: string
 * @input: minimum coins in change
 * Return: 0
 */

int min_coins(int input)
{
	int i = 0, counter = 0;
	int cents [] = {25, 10, 5, 2, 1};

	if (input < 0)
	{
	printf("0\n");
	return (1);
	}
	while (1)
	{
	if (input >= cents[i])
	{
	input = input - cents[i];
	counter++;
	}
	else if (input == 0)
	{
	return (counter);
	}
	else
	(i++);
	}
	return (counter);
}


/**
 * main - change for an amount of money
 * @argc: integer
 * @argv: string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int input, output;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	input = atoi(argv[1]);
	output = min_coins(input);
	printf("%d\n", output);
	return (0);
}
