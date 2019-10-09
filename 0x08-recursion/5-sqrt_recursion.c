#include "holberton.h"
/**
 * _sqrt_recursion2 - Seconds metodo
 * @n: First parameter
 * @i: Second parameter
 *
 * Return: int
*/
int _sqrt_recursion2(int n, int i)
{
if (i * i > n)
	return (-1);
if (i * i == n)
	return (i);
	return (_sqrt_recursion2(n, i + 1));
}

/**
 * _sqrt_recursion - Sqrt
 * @n: Value
 * Return: value int
*/

int _sqrt_recursion(int n)
{
int i = 0;
return (_sqrt_recursion2(n, i));
}
