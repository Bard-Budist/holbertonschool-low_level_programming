#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * malloc_checked - ..
  * @b: ...
  * Return: Void
  *
*/
void *malloc_checked(unsigned int b)
{
int *v = malloc(b);
if (v == NULL)
{
exit(98);
}
return (v);
}
