#include "lists.h"

/**
 * print_listint - function that prints all the
 * elements of a listint_t list
 * @h: number of nodes pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 1;

	if (h == NULL)
		return (1);

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
