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
	int i = 0;
	int *s;

	if (min > max)
	return (NULL);
	s = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (s == NULL)
	return (NULL);
	while (min <= max)
	{
		s[i] = min;
		min++;
		i++;
	}
	return (s);

}
