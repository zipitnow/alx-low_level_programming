#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts
 * new node at a given position
 * @head: a pointer to a pointer of a head node
 * @idx: the index of the list where a node is added
 * @n: variable to be added to the new node
 * Return: address of the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *current_node = malloc(sizeof(listint_t));
	listint_t *next_pointer = *head;

	if (current_node == NULL)
		return (NULL);
	current_node->n = n;

	while (idx == 0)
	{
		current_node = next_pointer->next;
		*head = current_node->next;
		return (current_node);
	}
	while (next_pointer != NULL)
	{
		if (count == idx - 1)
		{
			current_node = next_pointer->next;
			next_pointer = current_node->next;
			return (current_node);

		}
		count++;
		next_pointer = next_pointer->next;
	}

	free(current_node);
	return (NULL);
}
