#include "lists.h"

size_t print_listint(const listint_t *h)
{
	unsigned int count = 1;

	if (h == NULL)
		return (1);

	while (h != NULL)
	{
		count++;
		printf("%d\n",h->n);
		h = h->next;
	}
	return (count);
}
