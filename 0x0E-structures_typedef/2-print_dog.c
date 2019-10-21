#include "dog.h"
#include <stdio.h>
/**
* print_dog - Function print dog
* @d: Doge
*
*/
void print_dog(struct dog *d)
{
	if (d)
	{
	char *namec = (((*d).name) ? ((*d).name) : "(nil)");
	char *ownerc = ((*d).name) ? ((*d).owner) : "(nil)";

	printf("Name: %s\n", namec);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", ownerc);

	}
}
