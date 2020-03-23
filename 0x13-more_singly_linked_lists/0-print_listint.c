#include "lists.h"
/**
 *print_listint - Prints all the elements of a linked list (list_t)
 *@h: pointer to the list. Nodes
 *Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);

}
