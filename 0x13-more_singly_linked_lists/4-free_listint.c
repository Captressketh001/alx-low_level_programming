#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: double pointer to the listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;

		free(head);

		temp = head;
	}
}
