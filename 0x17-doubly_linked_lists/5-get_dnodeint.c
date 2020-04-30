#include "lists.h"
/**
 *get_dnodeint_at_index - Returns the nth node of the dlnklist
 *@head: The head of the doubly linked list
 *@index: The nth number of the node we want
 *Return: The nth node or NULL if not exists
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int len = 0;

	if (!head)
		return (NULL);

	tmp = head;

	while (len != index)
	{
		if ((tmp->next) != NULL)
			tmp = tmp->next;
		else
			return (NULL);
		len++;
	}
	return (tmp);
}
