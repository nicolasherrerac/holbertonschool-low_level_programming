#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: nodes.
 * Return: i.
 */
size_t print_list(const list_t *h)
{
	int i;
	const list_t *nodo = h;

	for (i = 0; nodo != NULL; i++)
	{
		if (nodo->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%d] %s\n", nodo->len, nodo->str);
		nodo = nodo->next;
	}
	return (i);
}
