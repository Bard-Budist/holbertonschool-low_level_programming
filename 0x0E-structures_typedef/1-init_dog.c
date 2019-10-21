#include "dog.h"
#include <stdio.h>
/**
* init_dog - init_dog
* @d: Doge
* @name: name of Doge
* @age: Age of Doge
* @owner: owner of Doge
*
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}
