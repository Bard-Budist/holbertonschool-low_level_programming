#include "holberton.h"
/**
 * _memset - Set values
 * @s: Pointer parameter
 * @b: Nothing xD
 * @n: n Bytes
 * Return: Pointer with values change
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
