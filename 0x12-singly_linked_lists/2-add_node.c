#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node - a function that adds a new node at the beginning
 * of a list_t list
 * @head: double pointer to the list_t
 * @str: new string add to the node
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	unsigned int len = 0;

	while (str[len])
		len++;

	add = malloc(sizeof(size_t));

	if (!add)
		return (NULL);

	add->str = strdup(str);
	add->len = len;
	add->next = (*head);
	(*head) = add;

	return (*head);

}
