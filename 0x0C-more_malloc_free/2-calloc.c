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
	int *c;

	if (size == 0 || nmemb == 0)
	return (NULL);
	unsigned int r = (nmemb * size);

	c = malloc(r);
	if (c == NULL)
	return (NULL);
	while (i <= r)
	{
		c[i] = 0;
		i++;
	}
	return (c);

}
