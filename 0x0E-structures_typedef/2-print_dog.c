#include "dog.h"
#include <stdio.h>
/**
* print_dog - Function print dog
* @d: Doge
*
*/
void print_dog(struct dog *d)
{
	if (d) {
	char *namec = (((*d).name) ? ((*d).name) : "(nil)");
	float agec = (((*d).age) ? ((*d).age) : -1);
	char *ownerc = ((*d).name) ? ((*d).owner) : "(nil)";

	printf("Name: %s\n", namec);
	if (agec == -1)
		printf("Age: (nil)\n");
	else
		printf("Age: %lf\n", agec);
	printf("Owner: %s\n", ownerc);

	}
}
