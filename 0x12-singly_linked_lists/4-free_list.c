#include "lists.h"

void free_list(list_t *head)
{
	list_t *node_free = head;
	list_t *next_free;
	
	while (node_free != NULL)
	{
		next_free = node_free->next;
		free(node_free->str);
		free(node_free);
		node_free = next_free;
	}
}
