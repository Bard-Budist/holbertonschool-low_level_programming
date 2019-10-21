#include "dog.h"
#include <stdio.h>
/**
* print_dog - Function print dog
* @d: Doge
*
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("nil/n");
		else
			printf("Name: %s\n", d->name);

		if (d->age == 0)
			printf("nil\n");
		else
			printf("Age: %lf\n", d->age);

		if (d->owner == NULL)
			printf("nil\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
