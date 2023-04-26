#include <stdio.h>

/**
 * main - Entry point
 * Description - print all the numbers of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';
	int Number;

	for (Number = 0; Number < 16; Number++)
	{
		if (Number < 10)
		{
			putchar(Number + '0');
		}
		else
		{
			putchar(ch);
			ch++;
		}
	putchar('\n');
	return (0);
	}
}
