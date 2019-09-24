#include "holberton.h"
/**
* print_last_digit - writes the character c to stdout
* @c: int parameter
*
* Return: Value of c
*/
int print_last_digit(int c)
{
int i = (c > 0) ? c % 10 : (c * -1) % 10;
_putchar(i + '0');
return (i);
}
