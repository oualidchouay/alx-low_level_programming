#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b:	Pointer to a string containing binary digits (0 and 1).
 *
 * Return: The converted number, or 0 on error.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = (result << 1) | (b[i] - '0');
	}

	return (result);
}
