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
	int n, Number;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Number = n % 10;

	if (Number > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, Number);
	else if (Number == 0)
		printf("Last digit of %d is %d and is 0\n", n, Number);

	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Number);

	return (0);
}
