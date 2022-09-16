#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size accepted
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x = 0, y;

		while (x < size)
		{
			y = 0;
			while (y < size)
			{
				_putchar('#');
				y++;
			}
			x++;
			_putchar('\n');
		}
	}
}
