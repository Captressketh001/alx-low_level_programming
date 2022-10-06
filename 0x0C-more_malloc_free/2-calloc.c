#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - a function that allocates memory for an array, using malloc
 * @nmemb: array
 * @size: size of byte in the array
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);

	memset(pointer, 0, nmemb * size);
	
	return (pointer


}
