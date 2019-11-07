#include "holberton.h"
/**
 * print_binary - Print binary
 * @n: n
 *
 *
*/
void print_binary(unsigned long int n)
{
	unsigned long int max = n;

	if (n > 0)
	{
		while (max > 0)
		{
			if ((max & n) == 0)
				_putchar('0');
			else
				_putchar('1');
			max = max >> 1;
		}
	}
	else
	{
		_putchar('0');
	}

}
