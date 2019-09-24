#include "holberton.h"
/**
 * print_sign - Write sign
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
int print_sign(int n)
{
int retorn;
if (n > 0)
{
_putchar('+');
retorn = 1;
}
else if (n == 0)
{
_putchar('0');
retorn = 0;
}
else
{
_putchar('-');
retorn = -1;

}
return (retorn);
}
