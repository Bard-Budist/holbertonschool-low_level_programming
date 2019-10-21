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
	int i, cn = 0, co = 0;
	dog_t *doge;

	if (name == NULL || owner == NULL)
		return (NULL);
	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
	return (NULL);
	while (name[cn] != '\0')
	cn++;
	cn++;
	doge->name = malloc(cn * sizeof(char));
	if (doge->name == NULL)
	{
		free(doge);
		return (NULL);
	}
	for (i = 0; i < cn; i++)
	{
	doge->name[i] = name[i];
	}
	doge->age = age;

	while (owner[co] != '\0')
	co++;
	co++;
	doge->owner = malloc(co * sizeof(char));
	if (doge->owner == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (i = 0; i < co; i++)
	{
		doge->owner[i] = owner[i];
	}
	return (doge);
}
