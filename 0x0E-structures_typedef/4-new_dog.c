#include "dog.h"
#include <stdlib.h>
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
	dog_t *doge = malloc(sizeof(dog_t));

	if (doge == NULL)
	return (NULL);
	char *nameC = name;
	char *ownerC = owner;
	if (nameC ==  NULL || ownerC == NULL)
	{
		return (NULL);
	}
	(*doge).name = nameC;
	(*doge).age = age;
	(*doge).owner = ownerC;

	return (doge);
}
