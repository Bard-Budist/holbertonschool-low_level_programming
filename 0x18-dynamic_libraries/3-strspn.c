#include "holberton.h"
/**
 * _strspn - fadwad
 * @s: String
 * @accept: Char accept
 *
 * Return: int
 *
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, n = 0;
for (i = 0; s[i] != ' '; i++)
{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
		n++;
	}
}
return (n);
}
