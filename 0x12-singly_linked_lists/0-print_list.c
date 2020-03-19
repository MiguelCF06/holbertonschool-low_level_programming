#include "lists.h"
#include <stdlib.h>
/**
 *print_list - Prints all the elements of a linked list (list_t)
 *@h: pointer to the list. Nodes
 *Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *lnklst = h;
	int count = 0;

	if (lnklst == NULL)
		return (0);
	while (lnklst != NULL)
	{
		printf("[%d]%s\n", lnklst->len, lnklst->str);
		lnklst = lnklst->next;
		count++;
	}
	return (count);
}
