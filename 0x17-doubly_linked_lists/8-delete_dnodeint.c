#include "lists.h"
/**
 *delete_dnodeint_at_index - Delete a node at index
 *@head: The head of the doubly linked list
 *@index: The given position
 *Return: 1 if success or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmpCur;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);

	tmpCur = *head;
	if (index == 0)
	{
		*head = tmpCur->next;
		if (tmpCur->next != NULL)
			tmpCur->next->prev = NULL;
		free(tmpCur);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (tmpCur->next == NULL)
			return (-1);
		tmpCur = tmpCur->next;
	}
	tmpCur->prev->next = tmpCur->next;
	if (tmpCur->next != NULL)
		tmpCur->next->prev = tmpCur->prev;
	free(tmpCur);
	return (1);
}
