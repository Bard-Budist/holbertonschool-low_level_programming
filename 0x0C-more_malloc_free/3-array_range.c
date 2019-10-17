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
	int *s;
	if (min > max)
	return (NULL);

	s = malloc((sizeof(int) + sizeof(int)) * (min - max));

	if (s == NULL)
	return (NULL);
	for (i = 0; i <= max; i++)
	{
		s[i] = min++;
	}

	return (s);

}
