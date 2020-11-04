#include "lists.h"
/**
 * sum_listint - function returns the sum of all the data (n) of a listint_t.
 * @head: first node.
 * Return: suma.
 */
int sum_listint(listint_t *head)
{
	int i;
	listint_t *node;
	int suma = 0;

	node = head;
	if (node == NULL)
		return (0);

	i = 0;
	while (node != NULL)
	{
		suma += node->n;
		node = node->next;
		i++;
	}
	return (suma);
}
