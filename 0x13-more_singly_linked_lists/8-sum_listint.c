#include "lists.h"
/**
 *sum_listint - Sum all the elements of a linked list (list_t)
 *@head: pointer to the list. Nodes
 *Return: The sum of all the nodes
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *nodes = head;

	while (nodes != NULL)
	{
		sum = sum + nodes->n;
		nodes = nodes->next;
	}
	return (sum);
}
