#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of lists_t list
 * @h: head of list
 *
 * Return: no. of nodes
 */

size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}

	for (i = 0; h; i++)
	{
		printf("[%u] %s\n", (h->str != NULL) ? h->len : 0,
			(h->str != NULL) ? h->str : "(nil)");
		h = h->next;
	}

	return (i);


}
