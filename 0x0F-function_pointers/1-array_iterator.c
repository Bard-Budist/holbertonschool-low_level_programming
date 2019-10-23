#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Array
 * @array: Array
 * @size: Size of array
 * @action: Function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
