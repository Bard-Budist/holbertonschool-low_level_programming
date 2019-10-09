#include "holberton.h"
/**
 * factorial - Factorial integer
 * @n: Parameter n
 *
 * Return: Factorial
 *
*/
int factorial(int n)
{
if (n > 0)
	return (n * factorial(n - 1));
else if (n == 0)
	return (1);
else
	return (-1);
}
