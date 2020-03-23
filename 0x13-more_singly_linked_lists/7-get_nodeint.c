#include "lists.h"
/**
 *get_nodeint_at_index - Look for the nth node of a Linked List (list_t)
 *@head: pointer to the list.
 *@index: Index of the node starting at 0
 *Return: The nth node of the Linked List
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int len = 0;

	if (!head)
		return (NULL);
	temp = head;

	while (len != index)
	{
		if ((temp->next) != NULL)
			temp = temp->next;
		else
			return (NULL);
		len++;
	}
	return (temp);
}
