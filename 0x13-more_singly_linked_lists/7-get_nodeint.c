#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *temp = head;

	while (temp && k < index)
	{
		temp = temp->next;
		k++;
	}

	return (temp ? temp : NULL);
}
