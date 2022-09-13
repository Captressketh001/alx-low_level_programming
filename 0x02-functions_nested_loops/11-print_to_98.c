#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers from n to 98,
 * followed by a new line
 * @n: integer expected
 */
void print_to_98(int n)
{
	int i, y;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else if (i == 98)
			{
				printf("%d\n", i);
			}
		}
	}
	else if (n >= 98)
	{
		for (y = n; y >= 98; y--)
		{
			if (y != 98)
			{
				printf("%d, ", y);
			}
			else if (y == 98)
			{
				printf("%d\n", y);
			}
		}
	}
}
