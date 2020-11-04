#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t.
 * @head: first node.
 * Return: F
 */
int pop_listint(listint_t **head)
{
	int a = 0;

	listint_t *nhead;

	a = (*head)->n;
	nhead = (*head)->next;
	free(*head);
	*head = nhead;

	return (a);
}
