#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - ;D
 * @size: size
 * @c: Char
 * Return: an Char
*/
char *create_array(unsigned int size, char c)
{
char *p;
if (size == 0)
return (NULL);

p = malloc(sizeof(char) * size);
while (size--)
{
p[size] = c;
}
return (p);

}
