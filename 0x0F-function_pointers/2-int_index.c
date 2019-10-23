#include "function_pointers.h"
#include <stdio.h>
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
	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
