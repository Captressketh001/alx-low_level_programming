#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 * @argc: no of arguments
 * @argv: a pointer array which points to each argument passed to the program
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int sum, num, x, y, z;

	sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] > '9' || argv[x][y] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (z = 1; z < argc; z++)
	{
		num = atoi(argv[z]);

		if (num >= 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
