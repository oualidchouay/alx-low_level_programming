#include <stdio.h>

/**
 * main - a program that prints its name, followed
 * by a new line
 * @argc: arguement count
 * @argv: argument value, a strings that comes after
 * calling function
 * Return: Always 0 (Success)
 **/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
