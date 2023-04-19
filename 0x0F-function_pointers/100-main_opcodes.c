#include <stdio.h>
#include <stdlib.h>

/**
 * main - Printing the opcodes of its actual self
 * @argc: Number of arguments that is being supplied to the program
 * @argv: Array of pointers that is leading to the arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int unit, pointer;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	unit = atoi(argv[1]);

	if (unit < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (pointer = 0; pointer < unit; pointer++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (pointer == unit - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
