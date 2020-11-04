#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: first node.
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		free(head);
		return;
	}
	free_listint(head->next);
	free(head);
}
