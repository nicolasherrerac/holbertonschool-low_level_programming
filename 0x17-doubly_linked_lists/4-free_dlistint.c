#include "lists.h"
/**
 * free_dlistint - that frees a dlistint_t list..
 * @head: first node.
 * Return: Always 0.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
