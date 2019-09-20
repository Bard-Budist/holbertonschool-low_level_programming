#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i, c, j;
for (i = 0; i < 90; i++)
{
c = i / 10;
j = i % 10;
if (c !=j)
{
putchar(c + '0');
putchar(j + '0');
if (i != 89)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
