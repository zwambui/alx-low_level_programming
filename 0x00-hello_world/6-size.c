#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	puts("Size of a char: %d byte(s)\n", sizeof(char));
	puts("Size of of int: %d byte(s)\n", sizeof(int));
	puts("Size of a long int: %d byte(s)\n", sizeof(long int));
	puts("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	puts("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
