#include <stdio.h>

/**
 * main - Entry point
 * Description - print ipossible combinations of single-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int Number;

	for (Number = 0; Number <= 9; Number++)

	{
		putchar(Number + '0');
		if (Number < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);





}
