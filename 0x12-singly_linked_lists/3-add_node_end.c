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
	char *str1 = strdup(str);
	list_t *lastpos = *head;

	new_node = malloc(sizeof(list_t));

	new_node->str = str1;
	new_node->len = _slength(str1);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (NULL);
	}

	while (lastpos->next != NULL)
		lastpos = lastpos->next;
	lastpos->next = new_node;
	return (lastpos);

}
