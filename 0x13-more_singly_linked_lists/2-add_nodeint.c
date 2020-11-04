#include "lists.h"
/**
 * add_nodeint - function adds a new node at the beginning of a listint_t list.
 * @head: first node.
 * @n: data of each node.
 * Return: NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	free(new);
	return (NULL);
}
