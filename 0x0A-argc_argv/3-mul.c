#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main
 * @argc: number parameter
 * @argv: Array with data
 * Return: 0
 *
*/
int main(int argc, char *argv[])
{
int mul, n1, n2, i = 0;
while (argc--)
i++;
if (i <= 2)
{
printf("Error\n");
return (1);
}
else
{
argv += 1;
n1 = atoi(*argv);
argv++;
n2 = atoi(*argv);
mul = n1 *n2;
printf("%i\n", mul);
}
return (0);
}
