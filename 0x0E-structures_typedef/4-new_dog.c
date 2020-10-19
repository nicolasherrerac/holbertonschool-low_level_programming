#include "dog.h"
/**
* new_dog - function that creates a new dog.
* @name: name of the pet.
* @age: age of the dog.
* @owner: owner of the pet.
* Return: dog.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (len1 = 0; name[len1]; len1++)
		;
	len1++;
	dog->name = malloc((len1) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (len2 = 0; owner[len2]; len2++)
		;
	len2++;
	dog->owner = malloc((len2) * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < len2; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
