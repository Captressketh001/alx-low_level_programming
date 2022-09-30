#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: no of arguments
 * @argv: a pointer array which points to each argument passed to the program
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if ((argc - 1) < 2 || (argc - 1) > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int c, d, e;

		c = atoi(argv[1]);
		d = atoi(argv[2]);
		e = c * d;

		printf("%d\n", e);
	}
	return (0);
}
