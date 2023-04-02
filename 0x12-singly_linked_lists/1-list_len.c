#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - finds numbers of nodes in a linked list
 * @h: pointer to head of the list
 *
 * Return: nodes in the list
 */

size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
