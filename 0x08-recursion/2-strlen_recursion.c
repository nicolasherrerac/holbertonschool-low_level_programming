#include "holberton.h"
/**
* _strlen_recursion - function that returns the length of a string.
* @s: pointer.
* Return: always 0.
*/
int _strlen_recursion(char *s)
{
	int l;

	l = 0;
	if (*s != '\0')
	{
		l++;
		return (l + _strlen_recursion(s + 1));
	}
	return (l);
}
