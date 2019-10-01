#include "holberton.h"
/**
 * puts2 - Print second caracter
 * @str: Parameter any caracter
 *
 *
*/
void puts2(char *str)
{
char *t = str;
int i, len = 0;
while (*t != '\0')
{
t++;
len++;
}
for (i = 0; i < len; i++)
{
if (i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}



