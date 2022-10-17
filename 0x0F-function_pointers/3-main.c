#include "3-calc.h"

/**
 * main - program that performs simple calculation
 * @argv: a pointer array which points to each argument passed to the program
 * @argc: no of argument
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int argm1, argm2, res;
	char check;
	int (*f)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	argm1 = atoi(argv[1]);
	argm2 = atoi(argv[3]);

	f = get_op_func(argv[2]);

	if (!f)
	{
		printf("Error\n");
		exit(99);
	}

	check = *argv[2];

	if ((check == '/' || check == '%') && argm2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = f(argm1, argm2);

	printf("%d\n", res);

	return (0);
}
