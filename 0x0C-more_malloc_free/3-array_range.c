#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - check the code for Holberton School students.
* @min: ..
* @max: ...
* Return: Always 0.
*/

int *array_range(int min, int max)
{
	int i;

	if (min > max)
	return (NULL);

	int *s = malloc(sizeof(int) * (min - max) + sizeof(int));

	if (s == NULL)
	return (NULL);
	for (i = 0; i <= max; i++)
	{
		s[i] = min++;
	}

	return (s);

}
