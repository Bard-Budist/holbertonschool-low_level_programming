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
while (s[i])
{
if (s[i] == c)
{
s += i;
return (s);
}
i++;
}
return ('\0');
}
