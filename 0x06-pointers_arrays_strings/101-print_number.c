#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: integer
 */

void print_number(int n)
{
	unsigned int s1;

	if (n < 0)
	{
		s1 = -n;
		_putchar('-');
	}
	else
	{
		s1 = n;
	}

	if (s1 / 10)
		print_number(s1 / 10);

	_putchar((s1 % 10) + '0');
}
