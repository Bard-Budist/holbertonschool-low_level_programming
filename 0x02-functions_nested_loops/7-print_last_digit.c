#include "holberton.h"
/**
* print_last_digit - writes the character c to stdout
* @c: int parameter
*
* Return: Value of c
*/
int print_last_digit(int n)
{
int i = (n < 0) ? n % 10 : ((n * -1) % 10);
_putchar(i + '0');
return (i);
}

