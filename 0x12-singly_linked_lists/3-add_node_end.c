#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds a new node at
 * the end of a list_t list
 * @head: pointer to another pointer for head
 * @str: pointer to string
 * Return: return a node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len_str = 0;
	list_t *new_node = malloc(sizeof(list_t));
	list_t *end_loop = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len_str] != '\0')
		len_str++;

	new_node->len = len_str;
	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	}
	else
	{
		while (end_loop->next != NULL)
			end_loop = end_loop->next;
		end_loop->next  = new_node;
	}
	return (new_node);
}
