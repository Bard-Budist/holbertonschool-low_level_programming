#include "holberton.h"
/**
 * binary_to_uint - Binary
 * @b: Number
 * Return: Num
 *
*/
unsigned int binary_to_uint(const char *b)
{
	int size = 0, mul = 1, i;
	unsigned int num = 0;

	if (b != NULL)
	{
		while (b[size] != '\0')
			size++;
		if (size >= 1)
		{
			for (i = size - 1; i >= 0; i--)
			{
				if ((b[i] >= 65 && b[i] <= 90) || (b[i] >= 97 && b[i] <= 122))
				{
					return (0);
				}
				if (b[i] == '1')
				{
					num += mul;
				}
				mul *= 2;
			}
			return (num);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
