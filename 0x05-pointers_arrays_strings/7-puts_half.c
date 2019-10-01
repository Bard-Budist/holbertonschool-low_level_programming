#include "holberton.h"
/**
 * puts_half - Print mitad
 * @str: Parameter of string
 *
*/
void puts_half(char *str)
{
int len = 0, i = 0;
char *str2 = str;
while (str2[0] != '\0')
{
str2++;
len++;
i++;
}
for (i = ((len % 2 == 1) ? (len - 1) / 2 : len / 2) ; i < len; i++)
{
char t = str[i];
_putchar(t);
}
_putchar('\n');
}
