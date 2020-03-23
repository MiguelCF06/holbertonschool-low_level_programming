#include"lists.h"
/**
 *free_listint - Frees a linked list (list_t)
 *@head: pointer to pointer in the list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
