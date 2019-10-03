#include "holberton.h"
/**
 * _strncpy - Copy Strings
 * @dest: Destiny
 * @src: Resource
 * @n: Bytes of string
 *
 * Return: String
*/
char *_strncpy(char *dest, char *src, int n)
{
int c = 0, c2 = 0, i;
char *T = src;
char *P = dest;
while (*P)
{
	c++;
	P++;
}
while (src[c2] != '\0')
{
	c2++;
	T++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
	dest[i] = src[i];
}
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);



}
