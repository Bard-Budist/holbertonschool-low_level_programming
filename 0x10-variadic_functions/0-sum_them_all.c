#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - Sum
 * @n: Value
 * Return: Sum of values
 *
 *
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int suma = 0, i;

	if (n == 0)
	return (0);
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		suma += va_arg(list, int);
	}

	va_end(list);
	return (suma);

}
