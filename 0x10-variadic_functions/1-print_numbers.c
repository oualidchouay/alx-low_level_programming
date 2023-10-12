#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @n: number of parameter
 * @separator: separator between two numbers
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	var_list ap;

	var_start(ap, n);

	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		printf("%d", var_arg(ap, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
		var_end(ap);
}

