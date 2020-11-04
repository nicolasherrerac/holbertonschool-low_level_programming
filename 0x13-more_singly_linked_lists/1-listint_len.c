#include "lists.h"
/**
 * listint_len - that returns the number of elements in a linked listint_t list
 * @h: nodes.
 * Return: i.
 */
size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
