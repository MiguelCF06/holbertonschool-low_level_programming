#include "lists.h"
/**
 *pop_listint - Remove the head of a Linked List (list_t)
 *@head: pointer to pointer in the list.
 * Return: The head nodes data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *delete;
	int numbers;

	if (*head == NULL)
		return (0);
	delete = *head;
	numbers = delete->n;
	*head = delete->next;

	free(delete);
	return (numbers);
}
