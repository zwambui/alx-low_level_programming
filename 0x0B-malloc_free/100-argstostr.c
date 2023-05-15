#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all arguements to the program
 * @ac: argurment count
 * @av: pointer to argurments
 * Return: pointer to new space in memory or null
 */

char *argstostr(int ac, char **av)
{
	char *strDup;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;

/**
 * strDup - allocate memory for total number of chars and
 * @str: string
 * Return: 0
 */
	char *strDup(const char *str);

	strDup = malloc(sizeof(char) * size);
	if (strDup == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			strDup[k++] = av[i][j];
		}
		strDup[k++] = '\n';
	}
	strDup[k] = '\0';
	return (strDup);
}
