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
int i = 0;
while (a[i] != '\0')
{
i++;
if (a[i] >= 97 && a[i] <= 122)
{
a[i] -= 32;
}
}
return (a);
}
