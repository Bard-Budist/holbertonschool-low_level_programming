#include "dog.h"
#include <stdlib.h>
/**
* free_dog - Doge
* @d: Doge
*
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free((*d).name);
	free((*d).age);
	free((*d).owner);
	free(d);
	}
}
