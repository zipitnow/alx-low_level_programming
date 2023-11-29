#include "lists.h"

/**
 * free_listint - function that frees a
 * listint_t list
 * @head: pointer to header node
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	if (head == NULL)
		free(current);
}
