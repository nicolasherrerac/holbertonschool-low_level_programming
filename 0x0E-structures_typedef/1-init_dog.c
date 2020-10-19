#include "dog.h"
/**
* init_dog - description of pet.
* @name: name of the pet.
* @age: age of the pet.
* @owner: owner of the pet.
* @d: struct.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
