#include "lists.h"
/**
 *reverse_listint - Reverse a linked list
 *@head: pointer to the list. Nodes
 *Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *nxt = NULL;

	if (*head != NULL)
	{
		while (*head != NULL)
		{
			nxt = (*head)->next;
			(*head)->next = prev;
			prev = (*head);
			(*head) = nxt;
		}
		*head = prev;
	}
	return ((*head));
}
