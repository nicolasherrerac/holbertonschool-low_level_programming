#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t.
 * @head: first node.
 * Return: F
 */
int pop_listint(listint_t **head)
{
	int teamf = 0;

	listint_t *nhead;

	teamf = (*head)->n;
	nhead = (*head)->next;
	free(*head);
	*head = nhead;

	return (teamf);
}
