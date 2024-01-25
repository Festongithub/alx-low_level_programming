#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;
	dlistint_t *old;

	if (head)
	{
		new = head;
		old = head->next;
	}
	while (old)
	{
		free(new);
		new = old;
		old = old->next;
	}
	free(new);
}
