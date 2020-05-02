#include "lists.h"
/**
 *insert_dnodeint_at_index - Insert a new node at a given position
 *@h: The head of the doubly linked list
 *@idx: The given position
 *@n: The data
 *Return: The address of the new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node, *tmpCur, *tmp2;

	if (h == NULL)
		return (NULL);

	if (idx != 0)
	{
		tmpCur = *h;
		for (i = 0; i < idx - 1 && tmpCur != NULL; i++)
			tmpCur = tmpCur->next;
		if (tmpCur == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		tmp2 = *h;
		*h = new_node;
		new_node->prev = NULL;
	}
	else
	{
		new_node->prev = tmpCur;
		tmp2 = tmpCur->next;
		tmpCur->next = new_node;
	}
	new_node->next = tmp2;
	if (new_node->next == NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
