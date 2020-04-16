#include "search_algos.h"
/**
 * binary_search - hash
 * @array: array int
 * @size: size
 * @value: value to search
 * Return: number
*/

int binary_search(int *array, size_t size, int value)
{
	int last = size - 1;
	int first = 0;
	int mid = size;

	while (first <= last)
	{
		printArray(array, first, last);
		mid = first + (last - first) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
			first = mid + 1;

		else
			last = mid - 1;
	}

	return (-1);
}

/**
 * printArray - print array
 * @array: array to print
 * @firs: size first
 * @last: size last
*/
void printArray(int *array, int firs, int last)
{
	int i = 0;

	printf("Searching in array: ");
	for (i = firs; i <= last; i++)
	{
		printf("%i", array[i]);
		if (i < last)
			printf(", ");
	}
	printf("\n");
}
