#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n).
 * @head: first node.
 * Return: result of sum.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *nodo = head;
	int sum = 0;

	if (nodo == NULL)
		return (0);

	while (nodo != NULL)
	{
		sum += nodo->n;
		nodo = nodo->next;
	}
	return (sum);
}
