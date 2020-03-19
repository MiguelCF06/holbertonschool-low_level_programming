#include "lists.h"
#include <stdlib.h>
/**
 *print_list - Prints all the elements of a linked list (list_t)
 *@h: pointer to the list. Nodes
 *Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
