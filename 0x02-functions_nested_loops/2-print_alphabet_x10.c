#include "holberton.h"
/**
 * print_alphabet_x10 - writes the character c to stdout
 *
 * On error, -1 is returned, and errno is set appropriately.
*/
void print_alphabet_x10(void)
{
char c, n;
for (n = '0'; n <= '9'; n++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
