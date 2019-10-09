#include "holberton.h"
/**
 * _puts_recursion - Print recursion
 * @s: String parameter
 *
 *
*/
void _puts_recursion(char *s)
{
	char c = *s;
	if (c == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(c);
		_puts_recursion(++s);
	}
}
