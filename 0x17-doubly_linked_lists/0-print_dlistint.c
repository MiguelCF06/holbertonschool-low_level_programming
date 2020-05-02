#include "lists.h"
/**
 *print_dlistint-Prints all elements in a doubly linked list
 *@h: The Doubly linked list
 *Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
