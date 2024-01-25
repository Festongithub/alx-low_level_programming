#include "lists.h"

/**
 * *add_dnodeint_end - add node at the end of the list
 * @head:pointer to head of the node
 * @n: number of nodes
 * Return: last node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node, *aux = *head;

	last_node = malloc(sizeof(dlistint_t));

	if (last_node == NULL)
		return (NULL);
	last_node->n = n;
	last_node->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		last_node->prev = aux;
		aux->next = last_node;
	}
	else
	{
		*head = last_node;
		last_node->prev = NULL;
	}
	return (last_node);
}
