#include "holberton.h"
/**
 * more_numbers - print numbers x10 at 0 to 14
*/
void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; j++)
{
_putchar(((j <= 9) ? j : (j / 10)) + '0');
if (j > 9)
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
