#include "lists.h"
/**
 *sum_dlistint - Sum of all the data in the dlnklist
 *@head: The head of the dlnklist
 *Return: The sum of the data if the list is empty return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *nodes;

	if (head == NULL)
		return (0);

	nodes = head;
	while(nodes != NULL)
	{
		sum = sum + nodes->n;
		nodes = nodes->next;
	}
	return (sum);
}
