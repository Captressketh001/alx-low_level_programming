#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: integer accepted
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int x;

		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
