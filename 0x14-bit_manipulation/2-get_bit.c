#include "holberton.h"
/**
 * get_bit - get bit
 * @n: number
 * @index: Index
 * Return: Number of byte
 *
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int temp = 0;

	if	(index > 64)
	{
		return (-1);
	}
	else
	{
		while (temp != index)
		{
			n /= 2;
			temp++;
		}
		if (index == temp)
		{
			return (n % 2);
		}
	}
	return (-1);
}

