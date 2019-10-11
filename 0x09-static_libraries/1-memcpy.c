#include "holberton.h"
/**
 * _memcpy - Copy memory
 * @dest: Destino
 * @src: Recurso
 * @n: Bytes
 *
 * Return: Pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
