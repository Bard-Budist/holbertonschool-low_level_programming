#include "holberton.h"
/**
 *
 *
 *
 *
*/
void puts2(char *str)
{
char *t = str;
int i, len = 0;
while (*t)
{
t++;
len++;
}
for (i = 0; i <= len; i= i + 2)
{
_putchar(str[i]);
}
_putchar('\n');
}



