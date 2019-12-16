#include "holberton.h"
/**
 * _isupper - Vaue if Upper
 * @c: Char
 * Return: 1 if is true
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
