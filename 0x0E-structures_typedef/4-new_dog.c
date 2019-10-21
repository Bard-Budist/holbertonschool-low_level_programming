#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* new_dog - The Dogeeeeee :D
* @name: Name of Dogeeeeee
* @age: Age of Doge
* @owner: Owner of Dogeeeeee
* Return: new_dog
*
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;

	if (name == NULL || owner == NULL)
	{
	return (NULL);
	}
	struct dog *doge = malloc(sizeof(struct dog));
	if (doge == NULL)
	return (NULL);
	char nameC[100];
	char ownerC[100];
	for (i = 0; name[i] != '\0'; i++)
	{
	nameC[i] = name[i];
	doge->name[i] = name[i];
	}
	for (i = 0; owner[i] != '\0'; i++)
	{
		ownerC[i] = owner[i];
		doge->owner[i] = owner[i];
	}
	doge->age = age;

	return (doge);
}
