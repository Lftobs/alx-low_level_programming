#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Entry
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new;
	int i, lname, lowner;

	dog_new = malloc(sizeof(*dog_new));
	if (dog_new == NULL || !(name) || !(owner))
	{
		free(dog_new);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	dog_new->name = malloc(lname + 1);
	dog_new->owner = malloc(lowner + 1);

	if (!(dog_new->name) || !(dog_new->owner))
	{
		free(dog_new->owner);
		free(dog_new->name);
		free(dog_new);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		dog_new->name[i] = name[i];
	dog_new->name[i] = '\0';

	dog_new->age = age;

	for (i = 0; i < lowner; i++)
		dog_new->owner[i] = owner[i];
	dog_new->owner[i] = '\0';

	return (dog_new);
}
