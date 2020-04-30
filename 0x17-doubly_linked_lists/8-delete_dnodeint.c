#include "lists.h"
/**
 *delete_dnodeint_at_index - Delete a node at index
 *@head: The head of the doubly linked list
 *@index: The given position
 *Return: 1 if success or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	while (i < index && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}

	if (index == 0)
	{
		(*head) = (*head)->next;
		(*head)->prev = NULL;
		free(tmp);
	}
	else if ((*head)->next == NULL)
	{
		tmp = (*head);
		(*head) = (*head)->prev;

		if (tmp != NULL)
			(*head)->next = NULL;
		free(tmp);
	}
	else if (tmp != NULL)
	{
		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
		free(tmp);
	}
	return (1);
}
