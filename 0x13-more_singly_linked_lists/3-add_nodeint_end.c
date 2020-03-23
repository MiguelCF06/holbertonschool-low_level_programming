#include "lists.h"
/**
 *add_nodeint_end - Add a new node of type int to the end of the linked list
 *@head: pointer to pointer in the list.
 *@n: The integer
 *Return: The address of the elements or null if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *lastpos;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	lastpos = *head;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (lastpos->next != NULL)
			lastpos = lastpos->next;
		lastpos->next = new_node;
	}
	return (*head);
}
