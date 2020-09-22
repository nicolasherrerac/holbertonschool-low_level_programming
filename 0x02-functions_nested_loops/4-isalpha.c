#include "holberton.h"
/**
* _isalpha - Write a function that checks for alphabetic character.
* @c: the caracter to check
* Return: 0
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
