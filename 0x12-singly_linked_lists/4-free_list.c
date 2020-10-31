#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: first node.
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		free(head);
		return;
	}
	free(head);
	free(head->str);
	free(head->next);
}
