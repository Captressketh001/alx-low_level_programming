#include "lists.h"

/**
 * *add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to the list_int list
 * @n: new node to be added
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *add;

	add = malloc(sizeof(size_t));

	if (!add)
		return (NULL);
	add->n = n;
	add->next = (*head);
	(*head) = add;

	return (add);
}
