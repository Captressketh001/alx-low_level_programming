#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number of arguments passed into i
 * @argc: the number of arguments passed
 * @argv: a pointer array which points to each argument passed to the program
 * Return: 0 always
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
