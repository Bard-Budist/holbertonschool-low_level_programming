#include <stdio.h>
/**
  * main - check the code for Holberton School students.
  *
  * Return: Always 0.
  */
int main(void)
{
int num1 = 0;
int num2 = 1;
int aux, i;
for (i = 0; i < 50; i++)
{
aux = num1 + num2;
printf("%d, ", aux);
num1 = num2;
num2 = aux;
}
return (0);
}
