#include "holberton.h"
#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
void print_to_98(int n)
{
if (n <= 98)
{
for (n = n; n <= 98; n++)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
}
}
else
{
for (n = n; n >= 98; n--)
{
printf("%d", n);
if (n != 98)
{
printf("\n");
}
}
}
printf("\n");
}
