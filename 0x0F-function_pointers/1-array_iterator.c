#include <stddef.h>
/* defines size_t */

/**
 * array_iterator - executes a function given
 * as parameter on each element of an array.
 * @array: array to execute func on
 * @size: size of array
 * @action: pointer to the function you need to use
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i; /* match data type */

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(*(array + i));
}
