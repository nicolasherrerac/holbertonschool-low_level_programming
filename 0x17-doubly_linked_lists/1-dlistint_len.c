#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i;
	const dlistint_t *nodo = h;

	for (i = 0; nodo != NULL; i++)
	{
		nodo = nodo->next;
	}
	return (i);
}