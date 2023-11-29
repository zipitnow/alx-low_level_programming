#include "lists.h"

/**
 * sum_listint - function that returns the sum
 * of all the data(n) of a listint_t linked list
 * @head: pointer to a node
 * Return: nth node or NULL if fail
 */

int sum_listint(listint_t *head)
{
		int count = 0;
		listint_t *counter = head;

		if (counter == NULL)
			return (0);
	while (counter != NULL)
	{
		count += counter->n;
		counter = counter->next;
	}
	return (count);

}
