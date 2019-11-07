#include "holberton.h"
/**
 * clear_bit - Clear bit
 * @n: Number
 * @index: Index
 * Return: 1 :) or -1 :(
 *
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
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
			if (*n != 0)
			*n -= mul;
			else
			*n = 0;
			return (1);
		}
	}
	return (-1);
}
