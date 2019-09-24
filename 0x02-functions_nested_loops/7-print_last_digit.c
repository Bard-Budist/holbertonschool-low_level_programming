#include "holberton.h"
/**
*print_last_digit - writes the character c to stdout
*@n: int parameter
*
*Return: Value of
*/
int print_last_digit(int n)
{
int i = n % 10;
i = (n > 0) ? i : (i * -1);
_putchar(i + '0');
return (i);
}

