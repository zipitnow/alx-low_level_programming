#include "lists.h"

/**
 * free_listint2 - function that frees a
 * listint_t list
 * @head: pointer to header node
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next_node;


	if (*head == NULL)
		free(*head);
	else
	{
		while (current != NULL)
		{
			next_node = current->next;
			free(current);
			current = next_node;
		}
		*head = NULL;
	}
}
