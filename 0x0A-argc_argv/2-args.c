#include "main.h"
#include <stdio.h>

/**
 * main - Printing all the content in args
 * @argc: the argument count
 * @argv: the vector argument
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{

	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
