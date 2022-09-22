#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: integer expected
 * @n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int x, y, z;

	y = n - 1;

	for (x = 0; x < n / 2; x++)
	{
		z = a[x];
		a[x] = a[y];
		a[y--] = z;
	}
}
