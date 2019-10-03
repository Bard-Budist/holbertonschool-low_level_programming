#include "holberton.h"
/**
 * _strcmp - Compare string
 * @s1: String 1
 * @s2: String 2
 * Return: Return value
*/
int _strcmp(char *s1, char *s2)
{
int i = 0, band;
int n1 = 0 , n2 = 0;
while (s1[n1] != '\0')
{
n1++;
}
while (s2[n2] != '\0')
{
n2++;
}
if (n1 != n2)
{
	i = 0;
	band = s1[i] - s2[i];
}
else
{
	band = 0;
}

return (band);
}
