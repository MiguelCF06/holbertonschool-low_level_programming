#include "lists.h"
/**
 *insert_nodeint_at_index -  Inserts a new node at a given position
 *@head: pointer to the list. Nodes
 *@idx: Position in the linked list
 *@n: Data to put in the index.
 *Return:  the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int i;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	temp = *head;
	i = 0;
	if (*head == NULL && idx > 0)
	{
		free(new_node);
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
	{
		while (i < idx - 1)
		{
			temp = temp->next;
			if (temp == NULL && idx - i > 0)
			{
				free(new_node);
				return (NULL);
			}
		}
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
	}
}
