#include <stdio.h>
#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 * in a linked list
 * @h: pointer to the list-t list
 * Return: the number of node
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
