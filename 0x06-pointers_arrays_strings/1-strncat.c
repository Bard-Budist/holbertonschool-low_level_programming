#include "holberton.h"
/**
  * _strncat - Concat string
  * @dest: Destino
  * @src: Recurso
  * @n: Value of bayte
  * Return: String concat
 */
char *_strncat(char *dest, char *src, int n)
{
int c = 0, c2 = 0, i;
char *T = src;
char *P = dest;
while (*P)
{
	c++;
	P++;
}
while (n < c2 && src[c2] != '\0')
{
	c2++;
	T++;
}
for (i = 0; i < n; i++)
{
	if (src[i] != '\0')
	dest[c] = src[i];
	else
	break;
	c++;
}
dest[c] = '\0';
return (dest);
}
