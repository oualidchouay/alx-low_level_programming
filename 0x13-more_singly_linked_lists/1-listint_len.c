#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes += 1;
		h = h->next;
	}

	return (num_nodes);
}
