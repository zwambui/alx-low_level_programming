#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a doubly linked list
 * @h: pointer to list header
 *
 * Return: no. of element in list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
