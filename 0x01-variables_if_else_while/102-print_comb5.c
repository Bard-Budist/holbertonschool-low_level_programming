#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, k, c, j,f,p;
for (i = 0; i < 100; i++)
{
for (f= 0; f< 100; f++) {
    /* code */

c = i / 10;
j = i % 10;
k = f / 10;
p = f % 10;
if ((i / 10 % 10 > i % 10) || (f / 10 % 10 > f % 10))
break;

putchar(c + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(p + '0');

putchar(',');
putchar(' ');

}
}
putchar('\n');
return (0);
}
