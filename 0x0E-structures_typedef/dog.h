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

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
