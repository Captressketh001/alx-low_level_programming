#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter
 * on each element of an array.
 * @array: The array passed
 * @size: size of the array
 * @action: pointer ti the function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (!array || !action)
		return;

	for (x = 0; x < size; x++)
		action(array[i]);
}
