#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Printing the sum of positive numbers of args
 * @argc: the argument count
 * @argv: the vector argument
 *
 * Return: Zero always
 */

int main(int argc, char *argv[])
{
	int x;
	unsigned int v, sum = 0;
	char *o;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			o = argv[x];

			for (v = 0; v < strlen(o); v++)
			{
				if (o[v] < 48 || o[v] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(o);
			o++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
