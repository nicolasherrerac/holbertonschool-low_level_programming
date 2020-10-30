#include "lists.h"
/**
* _strlen - returns the length of a string.
* @s: pointer
* Return: 0
*/
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		;
	}
	return (a);
}
/**
* add_node - function that adds a new node at the beginning of a list_t list.
* @head: first node.
* @str: tail nodes.
* Return: new.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
