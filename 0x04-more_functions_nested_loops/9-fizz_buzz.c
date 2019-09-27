#include <stdio.h>
/**
 * main - print 0 to 100
 *
 * Return: Always 0 Succes
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else if (i % 5 == 0)
printf("Buzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i < 10)
printf("%d", i);
else
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
}
if (i != 100)
putchar(' ');
}
putchar('\n');
return (0);
}
