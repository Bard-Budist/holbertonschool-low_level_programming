#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - Strchar
 * @s: String
 * @c: Char
 *
 * Return: Char
 *
*/
char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] != '0')
{
if (s[i] == c)
{
s += i;
return (s);
}
i++;
}
return (NULL);
}
