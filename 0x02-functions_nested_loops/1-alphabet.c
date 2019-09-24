#include "holberton.h"
/**
*print_alphabet - writes the character c to stdout
*
* On error, -1 is returned, and errno is set appropriately.
*/
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
