#include <stdio.h>
#include "lists.h"

/**
 * list_len - the list length
 * @h: head of the list
 *
 * Return: No. of elements in list
 */

size_t list_len(const list_t *h)
{
	int i;

	i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);

}
