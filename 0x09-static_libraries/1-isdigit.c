#include "holberton.h"
/**
 * _isdigit - Value if digit
 * @c: int parameter
 * Return: 1 if is digit
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
