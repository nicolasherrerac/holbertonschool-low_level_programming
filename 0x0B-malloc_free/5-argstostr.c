#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* argstostr - function that concatenates all the arguments of your program.
* @ac: number of arguments.
* @av: value of each arguments.
* Return: c.
*/
char *argstostr(int ac, char **av)
{
	char *c;
	int ag, ag1, size = 0, size1 = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (ag = 0; ag < ac; ag++)
	{
		for (ag1 = 0; av[ag][ag1] != '\0'; ag1++)
		{
			size++;
		}
		size++;
	}
	size++;
	c = malloc(size * sizeof(char));

	if (c == NULL)
	{
		return (NULL);
	}
	for (ag = 0; ag < ac; ag++)
	{
		for (ag1 = 0; av[ag][ag1] != '\0'; ag1++)
		{
			c[size1] = av[ag][ag1];
			size1++;
		}
		c[size1] = '\n';
		size1++;
	}
	c[size1] = '\0';
	return (c);
}
