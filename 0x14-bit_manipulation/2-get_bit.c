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
	unsigned int cont = 0;
	if (n != 0)
	{
		while (n)
		{
			if (index == cont)
			{
				return (n % 2);
			}
			n /= 2;
			cont++;
		}
	}
	else
	{
		return (0);
	}
	return (-1);
}

