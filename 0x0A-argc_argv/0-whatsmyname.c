#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name, followed by a new line
 * @argc: no of argument passed
 * @argv: points to each argument passed to the program
 * Return: 0
 */

int main(int argc __attribute__((__unused__)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
