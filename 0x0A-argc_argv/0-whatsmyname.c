#include "main.h"
#include <stdio.h>

/**
 * main - Printing its name
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: Zero always
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	printf("%s\n", argv[0]);

	return (0);
}
