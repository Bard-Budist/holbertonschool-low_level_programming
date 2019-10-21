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
	char *nameC;
	char *ownerC;

	if (name == NULL || owner == NULL)
	{
	return (NULL);
	}
	while (name[cn] != '\0')
	cn++;

	while (owner[co] != '\0')
	co++;
	nameC = malloc(nc * sizeof(char));
	if (nameC == NULL)
	{
		free(nameC);
		return (NULL);
	}
	ownerC = malloc(co * sizeof(char));
	if (ownerC == NULL)
	{
		free(ownerC);
		return (NULL);
	}
	struct dog *doge = malloc(sizeof(struct dog));
	if (doge == NULL)
	{
		free(doge);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
	{
	nameC[i] = name[i];
	}
	for (i = 0; owner[i] != '\0'; i++)
	{
		ownerC[i] = owner[i];
	}
	doge->name = nameC;
	doge->owner = ownerC;
	doge->age = age;

	return (doge);
}
