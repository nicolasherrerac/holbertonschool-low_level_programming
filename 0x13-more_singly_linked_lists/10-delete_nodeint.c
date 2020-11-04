#include "lists.h"
/**
 * delete_nodeint_at_index -  deletes the node at index.
 * @head: first node.
 * @index: index of the list.
 * Return: -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *new_node;

	if (!head || (!*head))
		return (-1);

	if (index == 0)
	{
		if (!(*head)->next)
		{
			free(*head);
			*head = NULL;
			return (1);
		}
		free(*head);
		*head = (*head)->next;
		return (1);
	}
	new_node = *head;

	for (count = 0; new_node && count < index; count++)
	{
		if (count == index - 1)
		{
			if (new_node->next)
			{
				free(new_node->next);
				new_node->next = (new_node->next)->next;
				return (1);
			}
		}
		new_node = new_node->next;
	}
	return (-1);
}
