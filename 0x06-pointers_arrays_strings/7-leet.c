#include "holberton.h"
/**
 * leet - Format leet
 * @n: Parameter
 *
 * Return: Char
 *
*/
char *leet(char *n)
{
int i = 0, j;
char c[] = {'a', 'e', 'o', 't', 'l'};
char r[] = {'4', '3', '0', '7', '1'};
while (n[i] != '\0')
{
	for (j = 0; j < 6; j++)
	{
		if (n[i] == c[j] || n[i] + 32 == c[j])
		{
		n[i] = r[j];
		}
	}
	i++;
}

return (n);
}
