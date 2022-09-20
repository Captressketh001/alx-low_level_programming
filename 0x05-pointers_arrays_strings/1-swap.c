#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: pointer to the first variable
 * @b: pointer to the second variable
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
