#include "variadic_functions.h"

/**
 * print_strings - print strings passed to the function separed by separators.
 * @separator: string to be printed between strings.
 * @n: number of strings passed to the function.
 *
 * Return: No return.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	var_list ap;

	var_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = var_arg(ap, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	var_end(ap);
}
