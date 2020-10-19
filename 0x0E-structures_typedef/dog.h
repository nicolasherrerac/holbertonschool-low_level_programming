#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
/**
* struct dog - structure of pets.
* @name: name of the pet.
* @age: age of the pet.
* @owner: owner of the pet.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
