#include "holberton.h"
/**
 * set_bit - Set bit
 * @n: Number
 * @index: Index
 * Return: 1 :) or -1 :(
 *
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int temp = 0;
	unsigned int mul = 1;

	if	(index > 64)
	{
		return (-1);
	}
	else
	{
		while (temp != index)
		{
			mul *= 2;
			temp++;
		}
		if (index == temp)
		{
			*n += mul;
			return (1);
		}
	}
	return (-1);
}
