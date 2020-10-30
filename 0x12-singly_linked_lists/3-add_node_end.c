#include "lists.h"
/**
* _strlen - returns the length of a string.
* @s: pointer
* Return: 0
*/
int _strlen(const char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		;
	}
	return (a);
}
/**
* add_node_end - function that adds a new node at the end of a list_t list.
* @head: first node.
* @str: tail nodes.
* Return: new.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = NULL;
	}
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
