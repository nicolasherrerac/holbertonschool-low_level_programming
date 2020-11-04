#include "lists.h"
/**
 * insert_nodeint_at_index -function inserts a new node at a given position.
 * @head: first node.
 * @idx: index of the list.
 * @n: data of each node.
 * Return: NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *new_node, *temp_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node || (!(*head) && idx > 0))
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp_node = *head;

	for (count = 0; temp_node && count < idx; count++)
	{
		if (count == idx - 1)
		{
			new_node->next = temp_node->next;
			temp_node->next = new_node;
			return (new_node);
		}
		temp_node = temp_node->next;
	}
	free(new_node);
	return (NULL);
}
