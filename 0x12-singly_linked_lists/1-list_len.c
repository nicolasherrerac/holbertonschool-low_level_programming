#include "lists.h"
/**
 * list_len - function returns the number of elements in a linked list_t list.
 * @h: nodos.
 * Return: i.
 */
size_t list_len(const list_t *h)
{
	unsigned int i;
	const list_t *nodo = h;

	for (i = 0; nodo != NULL; i++)
	{
		nodo = nodo->next;
	}
	return (i);
}
