#include "lists.h"
/**
 * _slength - Return the length of the string
 * @s: String
 * Return: Strlen
 */
int _slength(const char *s)
{
	int x;

	while (s[x] != 0)
		x++;
	return (x);
}
/**
 *add_node_end - Add a new node to the end of the linked list (list_t)
 *@head: pointer to pointer in the list.
 *@str: The string to duplicate and add
 *Return: The address of the elements or null if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *lastpos;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _slength(str);
	new_node->next = NULL;

	lastpos = *head;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (lastpos->next != NULL)
			lastpos = lastpos->next;
		lastpos->next = new_node;
	}
	return (*head);

}
