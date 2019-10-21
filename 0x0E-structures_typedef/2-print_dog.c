#include "dog.h"
#include <stdio.h>
/**
* print_dog - Function print dog
* @d: Doge
*
*/
void print_dog(struct dog *d)
{
	struct dog my_dog;
	my_dog = d;
	if (my_dog != NULL)
	{
		if (my_dog->name == NULL)
			printf("Name: (nil)/n");
		else
			printf("Name: %s\n", d->name);

		if (!my_dog->age)
			printf("Name: (nil)\n");
		else
			printf("Age: %lf\n", d->age);

		if (my_dog->owner == NULL)
			printf("Name: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
