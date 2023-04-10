#include "main.h"
#include <stdio.h>

/**
 * main - Printing the actual number of args
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: Zero always
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
