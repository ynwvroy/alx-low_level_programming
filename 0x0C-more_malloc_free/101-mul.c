#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int find_len(char *str);
char *create_xarray(int size);
char *literate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
 * find_len - finding length of string
 * @str: string to be measured.
 *
 * Return: length of string
 */

int find_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * create_xarray - Creating an array of chars and initialzing it with 'x'. Adding a terminating null byte.
 * @size: size of array being initialized
 *
 * Description: If there is insuffient space, function exits with 98 status
 * Return: Pointer to the array
 */

char *create_xarray(int size)
{
	char *row;
	int pointer;

	row = malloc(sizeof(char) * size);

	if (row == NULL)
		exit(98);

	for (pointer = 0; pointer < (size - 1); pointer++)
		row[pointer] = 'x';

	row[pointer] = '\0';

	return (row);
}

/**
 * iterate_zeroes - Iterating through a string of numbers containing leading zeroes until it hits the non-zero number.
 * @str: string of numbers to be iterated
 *
 * Return: Pointer to the next non-zero element.
 */

char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * get_digit - Converting the digit character to corresponding int.
 * @c: Character that is being converted
 *
 * Description: If c is a non-digit, the function exits with a status of 98.
 * Return: The converted int.
 */

int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}

/**
 * get_prod - Multiplication of the string of numbers by a single digit
 * @prod: buffer to store result
 * @mult: string of numbers
 * @digit: single digit
 * @zeroes: Necessary number of leading zeroes
 *
 * Description: If mult contains a non-digit, the function exits with a 98 value status
 */

void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, figure, two = 0;

	mult_len = find_len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		figure = (*mult - '0') * digit;
		figure += two;
		*prod = (figure % 10) + '0';
		two = figure / 10;
	}

	if (two)
		*prod = (two % 10) + '0';
}

/**
 * add_nums - Adding numbers that are stored in the two strings
 * @final_prod: Buffer that stores the final running product
 * @next_prod: next product that is being added
 * @next_len: length of next_prod
 */

void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int figure, two = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		figure = (*final_prod - '0') + (*next_prod - '0');
		figure += two;
		*final_prod = (figure % 10) + '0';
		two = figure / 10;

		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		figure = (*next_prod - '0');
		figure += two;
		*final_prod = (figure % 10) + '0';
		two = figure / 10;

		final_prod--;
		next_prod--;
	}

	if (two)
		*final_prod = (two % 10) + '0';
}

/**
 * main - Multiplication of two positive numbers
 * @argv: Argument number that is passed to the program
 * @argc: Array of pointers the argument
 *
 * Description: If number of arguments becomes incorrect or contains non-digits, function exits with a 98 status
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int u, v, w, x = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[2] = iterate_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	u = find_len(argv[1]) + find_len(argv[2]);
	final_prod = create_xarray(u + 1);
	next_prod = create_xarray(u + 1);

	for (v = find_len(argv[2]) - 1; v >= 0; v--)
	{
		w = get_digit(*(argv[2] + v));
		get_prod(next_prod, argv[1], w, x++);
		add_nums(final_prod, next_prod, u - 1);
	}
	for (v = 0; final_prod[v]; v++)
	{
		if (final_prod[v] != 'x')
			putchar(final_prod[v]);
	}
	putchar('\n');

	free(next_prod);
	free(final_prod);

	return (0);
}
