#include <stdio.h>
#include <stdlib.h>

/**
 * main -multiplies two numbers.
 * @argc: An argument counter
 * @argv: An argument values
 * Return: 0 on (success), 1 on (failure)
 **/

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul)
		return (0);
	}
}

