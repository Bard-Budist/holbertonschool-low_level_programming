#include "holberton.h"
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
char *t;
while (s[i] != '\0')
{
if (s[i] == c)
{
s += i;
t = s;
}
else
t = ((void *)0);
i++;
}
return (t);
}
