#include "holberton.h"
/**
* main - main
* Return: 0
*/
int main (int argc, char **argv)
{
int i;
for (i = argc; *argv[i] != '\0'; i++)
{
_putchar(*argv[i]);
}
return (0);
}
