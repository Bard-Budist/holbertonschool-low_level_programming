#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
* _realloc - prints buffer in hexa
* @ptr: the address of memory to print
* @old_size: the size of the memory to print
* @new_size: ..
* Return: Nothing.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *s = NULL;
	unsigned int i, m;


	m = (new_size > old_size) ? new_size : old_size;
	if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		s = malloc(m);
		if (s == NULL)
			return (NULL);
		return (s);
	}


	s = malloc(m);

	if (s == NULL)
	return (NULL);
	for (i = 0; i <= m; i++)
	{
		s[i] = ((int *)ptr)[i];
	}

	free(ptr);
	return (s);
}
