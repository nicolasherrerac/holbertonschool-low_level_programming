#include "holberton.h"
/**
* palindrome_size - take a size of the string.
* @s: potiner.
* Return: i.
*/
int palindrome_size(char *s)
{
	int i;

	i = 0;

	if (*s != '\0')
	{
		i++;
		return (i + palindrome_size(s + 1));
	}
	return (i);
}
/**
* palindrome_check - check if the string is a palindrome.
* @s: pointer.
* @i: Variable.
* Return: palindrome_check
*/
int palindrome_check(char *s, int i)
{
	if (i <= 1)
	{
		return (1);
	}
	if (*s != s[i - 1])
	{
		return (0);
	}
	else
		return (palindrome_check((s + 1), (i - 2)));
}
/**
* is_palindrome - function returns 1 if a string is a palindrome and 0 if not.
* @s: pointer.
* Return: palindrome_check.
*/
int is_palindrome(char *s)
{
	int i;

	i = palindrome_size(s);

	if (i <= 1)
	{
		return (1);
	}
	return (palindrome_check(s, i));
}
