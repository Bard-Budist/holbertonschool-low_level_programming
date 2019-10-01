#include "holberton.h"
/**
 *
 *
 *
 *
 *
*/
void print_rev(char *s)
{
int len = 0, i;
while (*s != '\0')
{
len++;
s++;
}
for (i = len; i > 0; i--)
{
_putchar(s[i]);
s--;
}
_putchar('\n');
}
