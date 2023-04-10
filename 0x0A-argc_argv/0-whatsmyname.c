#include "main.h"
#include <stdio.h>

/**
 * main - Printing the program name
 * @argc: the number of arguments
 * @argv: the argument array
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
