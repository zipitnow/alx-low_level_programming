#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n){
	unsigned int count = 0;
	listint_t *current_node = malloc(sizeof(listint_t));
	listint_t *next_pointer = *head;

	if (current_node == NULL)
		return NULL;
	current_node->n = n;

	while (next_pointer != NULL)
	{
		if (count == idx)
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
