#include "holberton.h"
/**
 *
 *
 *
 *
*/
void puts2(char *str)
{
int i;
for (i = 0; i <= 9; i= i + 2)
{
_putchar(str[i]);
}
_putchar('\n');
}



