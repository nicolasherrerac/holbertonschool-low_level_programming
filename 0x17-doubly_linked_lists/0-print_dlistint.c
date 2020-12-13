#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: integer.
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;
	const dlistint_t *nodo = h;

	for (i = 0; nodo != NULL; i++)
	{
		printf("%d\n", nodo->n);
		nodo = nodo->next;
	}
	return (i);
}
