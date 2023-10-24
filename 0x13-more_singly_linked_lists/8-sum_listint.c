#include "lists.h"

/**
 * sum_listint - Computes the sum of all the data (n)
 * in a listint_t linked list.
 * @head: A pointer to the first node.
 *
 * Return: The sum of all the data values, and 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
