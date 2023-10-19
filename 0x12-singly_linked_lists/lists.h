#ifndef LISTS_H
#define LISTS_H

/*
* Description: header file containing prototypes and definitions
* for all functions and types written in this project
*/

#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * print_list - prints the contents of a linked list
 * @h: pointer to the head of the linked list
 *
 * Description: prints the contents of a linked list, one node per line
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h);

/**
 * list_len - counts the number of nodes in a linked list
 * @h: pointer to the head of the linked list
 *
 * Description: counts the number of nodes in a linked list
 *
 * Return: number of nodes in the linked list
 */
size_t list_len(const list_t *h);

/**
 * add_node - adds a new node to the beginning of a linked list
 * @head: pointer to the head of the linked list
 * @str: string to add to the new node
 *
 * Description: adds a new node to the beginning of a linked list
 *
 * Return: pointer to the new head of the linked list
 */
list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end - adds a new node to the end of a linked list
 * @head: pointer to the head of the linked list
 * @str: string to add to the new node
 *
 * Description: adds a new node to the end of a linked list
 *
 * Return: pointer to the new tail of the linked list
 */
list_t *add_node_end(list_t **head, const char *str);

/**
 * free_list - frees all of the nodes in a linked list
 * @head: pointer to the head of the linked list
 *
 * Description: frees all of the nodes in a linked list, including the strings
 * that they contain
 */
void free_list(list_t *head);

#endif
