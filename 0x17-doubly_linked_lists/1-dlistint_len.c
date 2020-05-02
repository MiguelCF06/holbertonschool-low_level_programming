#include "lists.h"
/**
 *dlistint_len - Find the number of elements on a doub lnk list
 *@h: The doubly linked list
 *Return: The number of elements in the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}

	return (x);
}
