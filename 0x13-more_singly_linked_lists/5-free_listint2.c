#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_listint2 - Frees a linked list (list_t)
 *@head: pointer to pointer in the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	current = *head;
	while (current != NULL && head != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
