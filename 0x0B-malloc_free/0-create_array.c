#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: initial value
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0) /* validate size input */
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size); /* allocate memory */

	if (arr == NULL) /* validate memory */
		return (NULL);

	for (i = 0; i < size; i++) /* set array values to char c */
		arr[i] = c;

	return (arr);
}
