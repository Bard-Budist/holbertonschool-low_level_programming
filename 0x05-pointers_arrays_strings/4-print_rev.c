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
char *t = s;
int len = 0, i;
while (*t != '\0')
{
len++;
t++;
}
for (i = len; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
