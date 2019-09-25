#include "holberton.h"
/**
 * times_table - writes the character c to stdout
 *
 * On error, -1 is returned, and errno is set appropriately.
*/
void times_table(void)
{
int a, b, c;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
c = a * b;
if (c < 10)
{
if (b == 0)
{
_putchar(c + '0');
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(',');
_putchar(c + '0');
}
}
else
{
_putchar(',');
_putchar(' ');
_putchar(c / 10 + '0');
_putchar(c % 10 + '0');
}
}
_putchar('\n');
}
}
