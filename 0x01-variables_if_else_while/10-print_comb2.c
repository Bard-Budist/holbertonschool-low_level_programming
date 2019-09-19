#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, c, j;
for (i = 0; i < 100; i++)
{
c = i / 10;
j = i % 10;
putchar(c + '0');
putchar(j + '0');
if (i != 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
