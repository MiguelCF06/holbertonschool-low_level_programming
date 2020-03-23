#include "lists.h"
/**
 *delete_nodeint_at_index -  Delete a node at a given position
 *@head: pointer to the list. Nodes
 *@index: Position in the linked list
 *Return:  the address of the new node, or NULL if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = NULL;
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

	if (success)
	{
		listint_t *temp;

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
