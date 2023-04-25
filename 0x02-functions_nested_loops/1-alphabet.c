#include "main.h"

/**
 * main - Entry point
 *
 * Description - prints the alphabet, in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++);
	print_alphabet(ch);
	print_alphabet('\n');
	return (0);


}
