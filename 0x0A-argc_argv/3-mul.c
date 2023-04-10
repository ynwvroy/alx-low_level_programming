#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Printing of two args numbers that have been multiplied
 * @argc: the argument count
 * @argv: the vector argument
 *
 * Return: Zero always
 */

int main(int argc, char *argv[])
{
	int n4 = 0, n5 = 0;

	if (argc == 3)
	{
		n4 = atoi(argv[1]);
		n5 = atoi(argv[2]);
		printf("%d\n", n4 * n5);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
