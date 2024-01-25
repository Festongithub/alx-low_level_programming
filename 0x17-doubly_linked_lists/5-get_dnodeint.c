#include "lists.h"

/**
 * *get_dnodeint_at_index - returns the nth node
 * of a dlistint_t linked list
 * @head: pointer to the node
 * @index: element position
 * Return: node position
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
