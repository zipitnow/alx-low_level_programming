#include "lists.h"
/**
 * add_nodeint - function that adds a new node at
 * the beginning of a listint_t list
 * @head: a head pointer pointing to another pointer
 * @n: an integer value
 * Return: node pointer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	if (node != NULL)
	{
		node->next = *head;
		node->n = n;
		*head = node;
	}
	return (node);
}
