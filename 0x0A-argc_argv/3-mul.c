#include <stdio.h>
#include <stdlib.h>

/**
 * main -multiplies two numbers.
 * @argc: An argument counter
 * @argv: An argument values
 * Return: 0 on (success), 1 on (failure)
 **/

int main(int argc, char **argv)
{
	int x, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);

	return (0);
}

