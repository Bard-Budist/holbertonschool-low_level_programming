#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - str
 * @str: String paramter
 * Return: Char
 *
 *
 *
*/
char *_strdup(char *str)
{
char *p;
unsigned int a = 0, i = 0;
if (str == 0)
return (NULL);
else
{
while (str[a] != 0)
a++;
p = malloc(a *sizeof(char));
if (p == NULL)
return (NULL);
while (i < a)
{
p[i] = *str;
str++;
i++;
}
return (p);
}
return (p);
}

