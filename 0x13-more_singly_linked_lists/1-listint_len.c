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
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
