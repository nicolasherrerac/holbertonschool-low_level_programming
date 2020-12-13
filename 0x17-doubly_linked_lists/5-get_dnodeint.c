#include "lists.h"
/**
 * get_dnodeint_at_index - Get the dnodeint at index object.
 * @head: first node.
 * @index: position of node.
 * Return: Node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);
	c = 0;
	while (c < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		c++;
	}
	return (head);
}
