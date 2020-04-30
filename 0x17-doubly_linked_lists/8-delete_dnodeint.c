#include "lists.h"
/**
 *delete_dnodeint_at_index - Delete a node at index
 *@head: The head of the doubly linked list
 *@index: The given position
 *Return: 1 if success or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev = NULL;
	unsigned int i = 0;
	int success = *head != NULL;

	if (*head == NULL)
		return (-1);

	while (i != index && *head != NULL)
	{
		prev = *head;
		head = &(*head)->next;
		i++;
	}

	if (index > i)
		return (-1);

	if (success)
	{
		dlistint_t *temp;

		temp = *head;

		if (prev == NULL)
		{
			*head = (*head)->next;
		}
		else
		{
			prev->next = (*head)->next;
		}
		free(temp);
	}
	return (1);
}
