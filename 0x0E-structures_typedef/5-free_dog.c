#include "dog.h"
/**
* free_dog - function that free dogs.
* @d: pointer pointing to a structure
* Return: always 0.
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
