#include <stdio.h>
/**
 * main -entrypoint
 *
 * Return: always 0
 *
 */

int main(void)
{
	char zcharacter;
	int zinteger;
	long zlong;
	float zfloat;
	long long zlonglong;

	printf("Size of a char: %d byte(s)\n", sizeof(zcharacter));
	printf("Size of an int: %d byte(s)\n", sizeof(zinteger));
	printf("Size of a long int: %d byte(s)\n", sizeof(zlong));
	printf("Size of a long long int: %d byte(s)\n", sizeof(zlonglong));
	printf("Size of a float: %d byte(s)\n", sizeof(zfloat));

	return (0);
}
