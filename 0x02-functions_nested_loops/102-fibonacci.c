#include <stdio.h>
/**
  * main - check the code for Holberton School students.
  *
  * Return: Always 0.
  */
int main(void)
{
long num1 = 0;
long num2 = 1;
long aux, i;
for (i = 0; i < 52; i++)
{
aux = num1 + num2;
printf("%ld", aux);
if (i != 50)
putchar(',');
num1 = num2;
num2 = aux;
}
putchar('\n');
return (0);
}
