#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds new node at the beginning of the list
 * @head: head of the list
 * @str: string to be duplicated
 *
 * Return: address of new node or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new->next = *head;
	*head = new;

	return (*head);

}
