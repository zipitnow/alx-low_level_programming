#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in linked list_t list
 * @h: pointer to the nodes
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		count++;
	}
	return (count);
}
