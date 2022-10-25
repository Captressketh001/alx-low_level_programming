#include "lists.h"

/**
 * print_listint - returns the number of elements in a linked listint_t list
 * @h: ponter to the lstint_len  list
 *
 * Return: the numbers of node
 */

size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		s++;
		h = h->next;
	}
	return (s);
}
