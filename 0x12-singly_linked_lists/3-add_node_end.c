#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the list_t list
 * @str: new node string
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *g;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	g = malloc(sizeof(list_t));
	if (!g)
		return (NULL);

	g->str = strdup(str);
	g->len = len;
	g->next = NULL;

	if (*head == NULL)
	{
		*head = g;
		return (g);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = g;

	return (g);
}
