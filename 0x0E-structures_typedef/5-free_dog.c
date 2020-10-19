#include "dog.h"
#include <stdlib.h>
/**
* free_dog - function that free dogs.
* @d: pointer pointing to a structure
* Return: always 0.
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return (NULL);
	}
	free(d->name);
	free(d->owner);
	free(d);
}
