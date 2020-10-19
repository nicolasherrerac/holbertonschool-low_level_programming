#include "dog.h"
#include <stdio.h>
/**
* print_dog - print information of pet.
* @d: pointer pointing to a structure.
* Return: Always 0.
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nill)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nill)\n", d->owner);
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
