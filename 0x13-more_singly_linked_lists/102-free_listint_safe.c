#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc_array - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old array to append
 * @size: size of the new list (always one more than the old list)
 * @new_node: new node to add to the array
 *
 * Return: pointer to the new list
 */
listint_t **_realloc_array(listint_t **list, size_t size, listint_t *new_node)
{
	listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new_node;
	free(list);

	return (newlist);
}

/**
 * free_listint_safe - frees a listint_t linked list.
 * @head: double pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t i, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);

	while (*head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (*head == list[i])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _realloc_array(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}
