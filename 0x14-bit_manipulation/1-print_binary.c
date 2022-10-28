#include "main.h"

/**
 * print_binary -  prints the binary representation of a number
 *
 * @n: the number to represent in binary
 */

void print_binary(unsigned long int n)
{
	if (n > 0)
	{
		print_binary(n >> 1);
		printf("%ld", n & 1);
	}
}
