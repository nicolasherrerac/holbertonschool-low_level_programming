#include "lists.h"
/**
 * get_nodeint_at_index - Get the nodeint at index object
 * @head: first node.
 * @index: index of the node.
 * Return: node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	i = 0;
	while (i <= index)
	{
		if (head == NULL)
			return (NULL);

		node = head;
		head = head->next;
		i++;
	}
	return (node);
}
