#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - check the code for Holberton School students.
 * @nmemb: ..
 * @size: ...
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *c;

	if (size == 0)
	return (NULL);
	if (nmemb == 0)
	return (NULL);

	c = malloc(nmemb * size);
	if (c == NULL)
	return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		c[i] = 0;
	}

	return (c);

}
