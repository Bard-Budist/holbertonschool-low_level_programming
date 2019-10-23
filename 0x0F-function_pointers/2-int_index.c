#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * int_index - Array index
 * @array: Array
 * @size: Size array
 * @cmp: Function of pointer
 * Return: First value
 *
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	
	if (size <= 0)
	{
		return (-1);
	}

	int i, c = 0;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
