#include "lists.h"

/**
 * *get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: pointer to the listint_t list
 * @index: index of the node
 * Return: the node or null if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	*temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp || NULL);
}
