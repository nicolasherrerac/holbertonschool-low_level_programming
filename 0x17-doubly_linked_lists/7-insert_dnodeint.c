#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: first node.
 * @idx: position.
 * @n: value
 * Return:  address of the new node, or NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int c = 0;
	dlistint_t *nodo, *temp = *h;

	nodo = malloc(sizeof(dlistint_t));
	if (nodo == NULL)
		return (NULL);
	nodo->n = n;
	if (idx == 0)
	{
		nodo->next = temp;
		temp = nodo;
		return (nodo);
	}
	while (c < (idx - 1))
	{
		if (temp == NULL)
		{
			free(nodo);
			return (NULL);
		}
		c++;
		temp = temp->next;
	}
	nodo->next = temp->next;
	temp->next = nodo;
	return (nodo);
}
