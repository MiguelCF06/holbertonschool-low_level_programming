#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
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
 *add_node - Add a new node to the linked list (list_t)
 *@head: pointer to pointer in the list.
 *@str: The string to duplicate
 *Return: The address of the elements
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->len = _slength(str);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
