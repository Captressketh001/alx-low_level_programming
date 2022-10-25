#include "lists.h"

/**
 * *add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to the list_int list
 * @n: new node to be added
 *
 * Return: the address of the added element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *add;

	add = malloc(sizeof(listint_t));

	if (!add)
		return (NULL);
	add->n = n;
	add->next = (*head);
	(*head) = add;

	return (add);
}
