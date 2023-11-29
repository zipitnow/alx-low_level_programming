#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node
 * index of a listint_t linked list
 * @head: a pointer to a pointer head
 * @index: of the node to be deleted
 * Return: 1 if success else -1 fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int count = 0;
	listint_t *current = *head;
	listint_t *next;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	else
	{
		while (current != NULL)
		{
			next = current;
			if (count == index - 1)
			{
				current = current->next;
				next->next = current->next;
				free(current);
				return (1);
			}
			count++;
			current = current->next;
		}
		next->next = current->next;
		free(current);
		return (1);

	}
	return (-1);
}
