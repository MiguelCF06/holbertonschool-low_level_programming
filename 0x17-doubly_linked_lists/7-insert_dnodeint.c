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
	unsigned int i;
	dlistint_t *new_node, *tmp, *tmp2;

	if (h == NULL && idx != 0)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	tmp = *h;
	if (idx == 0)
	{
		if (tmp != NULL)
		{
			new_node->next = tmp;
			tmp->prev = new_node;
		}
		else
			new_node->next = NULL;
		new_node->prev = NULL;
		*h = new_node;
		return (*h);
	}
	for (i = 0; i < idx - 1 && tmp != NULL; i++)
	{
		if (tmp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		tmp = tmp->next;
	}
	if (tmp == NULL)
		free(new_node);
	tmp2 = tmp;
	tmp = tmp->next;
	tmp2->next = new_node;
	new_node->next = tmp;
	new_node->prev = tmp2;
	return (new_node);
}
