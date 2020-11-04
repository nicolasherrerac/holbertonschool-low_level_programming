#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t.
 * @head: first node.
 * Return: F
 */
int pop_listint(listint_t **head)
{
	int F = 0;

	listint_t *nhead;

	F = (*head)->n;
	nhead = (*head)->next;
	free(*head);
	*head = nhead;

	return (F);
}
