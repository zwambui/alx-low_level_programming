#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description - print the last digit of the number stored
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Value = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, Value);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, Value);
	else(n < 6) & &(n > 0)

		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Value);

	return (0);
}
