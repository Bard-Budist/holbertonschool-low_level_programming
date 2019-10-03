#include "holberton.h"
/**
 * string_toupper - String to upper
 * @a: Parameter of char
 *
 * Return: String
 *
 *
 *
*/
char *string_toupper(char *a)
{
int i = 0, c;
while (a[i] != '\0')
{
i++;
}
c = i;
for (i = 0; i < c - 1; i++)
{
if (a[i] >= 97 && a[i] <= 122)
{
char c = a[i];
c -= 32;
a[i] = c;
}
}
return (a);
}
