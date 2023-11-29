#include "lists.h"

/**
 * pop_listint - function that deletes the head node of
 * a listint_t linked list and returns the head node's
 * data
 * @head: points to the head node
 * Return: head's node data
 */

int pop_listint(listint_t **head)
{
	listint_t *init;
	int data;

	init = *head;

	if (*head == NULL)
		return (0);
	data = init->n;
	*head = (*head)->next;
	return (data);


}
