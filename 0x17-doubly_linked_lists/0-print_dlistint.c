#include "lists.h"
/**
 *print_dlistint-Prints all elements in a doubly linked list
 *@h: The Doubly linked list
 *Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int x = 0;
	const dlistint_t *tmp;

	if (h == NULL)
		return (-1);

	tmp = h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		x++;
	}

	return (x);
}
