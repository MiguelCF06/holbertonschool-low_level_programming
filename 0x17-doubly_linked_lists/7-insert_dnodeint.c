#include "lists.h"
/**
 *insert_dnodeint_at_index - Insert a new node at a given position
 *@h: The head of the doubly linked list
 *@idx: The given position
 *@n: The data
 *Return: The address of the new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *tmp;

	if (h == NULL)
		return (NULL);

	tmp = *h;

	while (i < idx - 1 && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp != NULL)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = tmp->next;
		new_node->prev = tmp;

		if (tmp->next != NULL)
			tmp->next->prev = new_node;
		tmp->next = new_node;
	}
	return (new_node);
}
