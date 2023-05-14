#include <stdio.h>
#include <stdlib.h>

/**
 * min_coins - calculate minimum number of coins for change
 * @input: amount of cents
 * Return: minimum number of coins
 */
int min_coins(int input)
{
	int counter = 0;
	int cents[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(cents) / sizeof(cents[0]);

	if (input < 0)
	{
	printf("0\n");
	return (1);
	}

	for (int i = 0; i < num_coins; i++)
	{
	while (input >= cents[i])
	{
		input -= cents[i];
		counter++;
	}
	}

	return (counter);
}

/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	int cents = atoi(argv[1]);
	int num_coins = min_coins(cents);

	printf("%d\n", num_coins);

	return (0);
}
