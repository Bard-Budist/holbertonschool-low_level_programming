#include "holberton.h"
#include <stdio.h>
/**
 * main - Main
 * @argc: Number of parameter
 * @argv: Paramets
 * Return: 0
 *
*/
int main(int argc, char *argv[])
{
while (argc--)
printf("%s\n", *argv++);
return (0);
}
