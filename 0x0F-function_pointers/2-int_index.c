#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches through an integer
 * @array: array to be searched throuhg
 * @size: size of the array
 * @cmp: pointer to the functionto be used to compare value
 * Return: the index of the first element if cpm does not return 0 and -1 if
 * size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int x;

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}

	return (-1);
}
