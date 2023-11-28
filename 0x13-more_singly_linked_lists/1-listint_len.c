#include "lists.h"

/**
 * listint_len - function that prints all the
 * elements of a listint_t list
 * @h: number of nodes pointer
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
