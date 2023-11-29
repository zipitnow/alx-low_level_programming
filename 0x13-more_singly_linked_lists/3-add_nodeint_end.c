#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at
 * the beginning of a listint_t list
 * @head: a head pointer pointing to another pointer
 * @n: an integer value
 * Return: node pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *end_pointer = *head;

	if (node != NULL)
	{
		node->next = NULL;
		node->n = n;
	}
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (end_pointer->next != NULL)
		end_pointer = end_pointer->next;
	end_pointer->next = node;
	return (node);
}
