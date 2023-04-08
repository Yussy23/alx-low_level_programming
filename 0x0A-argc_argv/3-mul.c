#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Program that takes first two integer arguments and prints the product
 * @argc: number of arguments
 * @argv: numbers to multiply
 * Return: 0 on success, 1 if two arguments not given
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
		j *= atoi(argv[i]);

		printf("%d\n", j);
	}

	return (0);
}
