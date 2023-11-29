#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth
 * node of a listint_t linked list
 * @head: pointer to a node
 * @index:index of the node
 * Return: nth node or NULL if fail
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *counter = head;

	while (counter != NULL)
	{
		if (count == index)
			return (counter);
		count++;
		counter = counter->next;
	}
	return (counter);

}
