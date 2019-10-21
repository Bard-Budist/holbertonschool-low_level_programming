#include "dog.h"
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
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
