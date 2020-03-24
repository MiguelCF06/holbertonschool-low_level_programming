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
	listint_t *temp, *prev, *current;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (*head == NULL && idx == NULL)
		return (NULL);
	new_node->n = n;

	current = *head;
	temp = current;

	if (idx == 0)
	{
		new_node->next = current;
		current = new_node;
		return (current);
	}
	else
	{
		while (idx--)
		{
			prev = temp;
			temp = temp->next;
		}
		prev->next = new_node;
		new_node->next = temp;
		return (current);
	}
}
