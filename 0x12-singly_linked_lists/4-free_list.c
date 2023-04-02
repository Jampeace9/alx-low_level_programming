#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: a pointer to the list_t list.
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *i;

	while (head)
	{
		i = head->next;
		free(head->str);
		free(head);
		head = i;
	}
}
