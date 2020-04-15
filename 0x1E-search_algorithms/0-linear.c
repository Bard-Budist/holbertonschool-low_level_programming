#include "search_algos.h"
/**
 * linear_search - hash
 * @array: array int
 * @size: size
 * @value: value to search
 * Return: number
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}

	}
	return (-1);
}
