#include "lists.h"
#include <string.h>

/**
 * add_node - Function that adds a new node at the begining
 * of list_t list
 * @head: a pointer to another pointer
 * @str: pointer to a string
 * Return: a node or null
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int str_len = 0;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[str_len] != '\0')
		str_len++;

	new_node->len = str_len;

	if (head == NULL)
	{
	*head = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}
